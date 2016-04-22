##准备工作
* Node.js，git安装  
* 在gitbook和github上用同一个邮箱注册    

##工具安装
###配置gitbook  
+ 确认node.js安装是否成功  
`node -v`//有结果输出就表示OK  
+ 安装gitbook  
`npm install gitbook -g cli`  
`gitbook -V`//查看是否安装成功  
+ 添加SUMMARY.md  
**通过修改SUMMARY.md来改变链接内容**  
+ 编译  
`gitbook build ./`  
+ 查看  
在生成的_book目录中有个index.html,可以即可。  


###用git命令与github关联  
+ 配置本地git及生成公钥  
`ssh-keygen.exe -C "test@gmail.com" -t rsa`  
用记事本打开生成的id_rsa.pub，把内容拷贝到登陆过后github的(Your profile)右上角的Settings->SSH keys  
+ 测试连接是否成功  
`ssh -T git@github.com` *You've successfully authenticated, but GitHub does not provide shell access.*有这样的提示表示连接成功。  
+ 设置用户信息  
`git config --global user.name "test"`    
`git config --global user.email "test@gmail.com"`
+ 获取git仓库  
`git init`  
`git clone git@github.com:name/test.git`//本地是个镜像    
+ 添加与提交文件  
`git add file`//用来跟踪文件  
`git status`//查看状态，哪些文件被暂存？哪些未跟踪文件？哪些文件被修改    
`git commit -m "comment"`  
`git remote add origin git@github.com:name/test.git`//具体用户名和Repo工程名  
`git push`//将本地仓库推送到远程服务器  


###github与gitbook的关联  
参考[http://my.oschina.net/waylau/blog/355179]()  

##参考
+ github参考  
[http://jingyan.baidu.com/article/e75aca85bb2720142edac61d.html]()   
+ git系列
[http://www.cnblogs.com/BeginMan/category/551237.html]()


##履历
+ v1.0
  20150928整个部署完毕，20150929第一版做成  
