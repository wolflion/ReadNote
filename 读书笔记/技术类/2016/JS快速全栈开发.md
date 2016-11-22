##  缘起
+ 201610月借的，20161102开始看
+ 《Rapid Prototyping with JS：Agile JavaScript Development》

##  内容
###  Part1 快速入门
####  chap1 基础知识
+ 1.1 定义前端
	+ HTML
		+ HTML文档会有一个html标签，所有其他元素都是html标签的子标签。
		+ HTML元素具有一些属性：class,id,style,data-name,onclick。
		+ 把内联的属性转换为JS事件，只需要把on前缀去掉就行了，即click事件。
	+ CSS 
		+ HTML文档可以通过一个link标签引入外部的CSS文件 `<link rel="stylesheet" type="text/css" herf="style.css"/>`
		+ 直接通过style标签内联CSS代码。 `<style> body{padding-top:60px;}</style>`
	+ JavaSript 
+ 1.2 敏捷开发概述
	+ Scrum
		+ Scrum由一个个短周期组成，每个周期叫sprint。
		+ 在scrum会上，每一个团队成员要回答三个问题：
			+ 自己咱天做了什么；
			+ 今天准备做什么；
			+ 是否需要从其他团队成员那里得到些什么。
	+ 测试驱动开发TDD
	+ 持续部署和集成
	+ 结对编程
+ 1.3 后端定义
	+ Node.js
	+ NoSQL和MongoDB
	+ 云计算
		+ IaaS
		+ PaaS
		+ BaaS 后端即服务 （Parse.com, Firebase）
		+ SaaS   
	+ HTTP请求和响应
	+ REST式API
		+ PUT和DELETE是幂等方法，这意味着如果服务器接收到两个或者更多个类似的请求，返回结果是一样的。
		+ GET是幂零的，POST是非幂等的，它们可能影响状态并且导致副作用。 

###  chap2 设置
+ 2.1 本地环境搭建
	+ 路径：Documents/Development/rpjs
	+ open. （Mac上打开Finder应用） / ls -alh（按文件字母排序） / ls -alt（按文件时间排序）
	+ 本地HTTP服务器： **MAMP**
	+ 把前端JS库下载并解压到开发目录里；直接使用开放的CDN服务。
+ 2.2 云端环境搭建
	+ SSH密钥
	+ GitHub
	+ Windows Azure
	+ Heroku （应用部署的平台）
	+ Cloud9（ *在浏览器里运行的IDE，绑定GitHub或BitBucket账户后，可以用于浏览，编辑仓库* ），类似于Google Docs。

###  Part2 前端原型构建
####  chap3 jQuery和Parse.com

####  chap4 Backbone.js

####  chap5 Backbone.js和Parse.com



###  Part3 后端原型构建

