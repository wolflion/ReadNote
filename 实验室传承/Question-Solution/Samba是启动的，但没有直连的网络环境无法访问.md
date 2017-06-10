##  问题及场景
+ 实验室大屋有台106的debian系统，莫名其妙有段时间xshell也远程不了（*报密码错误，我去环境上重新改了一下原来的密码，还是不行。*），勒索病毒后，小屋也不能访问debian系统上的samba服务了，共享的盘用不了，但共用一个路由器的大屋就可以访问（*导师也没发现，就一直拖着没定位*）。
+ 2017-06-09晚上想去上面下个电影看看，就用xshell登陆上去看下，竟然能登陆，就想着顺便解决一下这个问题。

##  解决思路
### 第一次定位：根据之前报错的提示以及勒索病毒的时机。
+ 定位是：443端口被禁用了。

### 提示1：该设备或资源可用，但没有响应连接尝试。远程计算机上的防火墙或网络安全策略可能阻止连接端口“文件和打印共享资源”。
+ `chkconfig iptables off`用不了
+ `service iptables off`也用不了
+ 试了下`/sbin/iptables -t nat -A PREROUTING -p tcp --dport 443 -j REDIRECT --to-port 8443` 是不是443不给用，我就定向到8443好了

### 提示2：文件和打印共享资源(222.195.149.106)处于联机状态，但未对连接尝试做出响应。（远程计算机不接受端口 445 上的连接，这可能是由于防火墙或安全策略设置，或因为服务可能暂时不可用。Windows 在计算机的防火墙上找不到任何问题。）
+ `/sbin/iptables -I INPUT -p tcp --dport 8443 -j ACCEPT
` //想让8443开启

### 提示3：0x80070035找不到网络路径
+ "Microsoft Network client: Digitally sign communications (always)" setting
+ 



##  参考以及get到的点
+ [Linux下防火墙开启相关端口及查看已开启端口](http://www.cnblogs.com/dlts26/archive/2012/09/03/2668887.html)
	+ `/etc/init.d/iptables status `
	+ `/sbin/iptables -I INPUT -p tcp --dport 8011 -j ACCEPT #开启8011端口 `
+ [Linux如何打开端口](http://www.cnblogs.com/simonhaninmelbourne/archive/2012/10/06/2713233.html)
+ [linux不能开启443端口](http://blog.csdn.net/wenzuowei110/article/details/7871971)
	+ `/sbin/iptables -t nat -A PREROUTING -p tcp --dport 443 -j REDIRECT --to-port 8443`
+ `lsof -i:443` 竟然在系统上不支持
+ [Linux中Samba搭建及文件共享打印](http://www.linuxidc.com/Linux/2013-09/90764.htm)
	+ `netstat -tupln | grep smb` 或 `netstat -tupln | grep nmb`
+ [samba共享目录无法访问解决方法总结](http://blog.sina.com.cn/s/blog_86fe5b440101b9l9.html)
+ [Network error code 0x80070035](https://social.technet.microsoft.com/Forums/windows/en-US/a0515bcb-e521-4e9b-9322-0fb87d344d43/network-error-code-0x80070035?forum=w7itpronetworking)
+ [Windows can't access Samba shares (code 0x80070035)](https://ubuntuforums.org/showthread.php?t=1948797)
+ [linux如何设置共享?](https://zhidao.baidu.com/question/18067161.html)
+ [Linux中Samba搭建及文件共享打印](http://www.linuxidc.com/Linux/2013-09/90764p2.htm)
+ `nmap`的用法
+ [Unable to Access SAMBA Share from Windows 7](https://www.sevenforums.com/network-sharing/322851-unable-access-samba-share-windows-7-a.html)