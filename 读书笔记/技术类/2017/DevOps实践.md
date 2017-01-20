## 缘起
+ 不知道啥时候从图书馆借的了。
+ 2017-01-04之前整理还书时，发现的这本书，还是用别人的卡借的。
+ 2017-01-18开始看。

##  内容
###  chap1 DevOps和持续交付简介
+ DevOps简介
	+ Patrick Debois
	+ 2009年 O'Reilly Velocity大会
+ 多快才算快
+ 敏捷之轮
	+ 敏捷开发可以分为几下周期：投资级的周期、Srum周期、看板周期、持续集成周期。
+ 敏捷不只是形式
	+ Richard Feynaman
	+ *我们是否正在做正确的事？是否还在正确的路上？时刻关注我们的目标并经常问自己，是件非常重要的事情。* 这是敏捷思考的中心。
+ DevOps和ITIL
	+ ITIL（Information Technology Infrastructure Library）

###  chap2 洞察全局 P9/200 
+ **在开始实践之前，你需要搞清楚最终需要的结果是什么。**
+ DevOps流程和持续交付--概览
	+ 开发人员
	+ 版本控制系统
	+ 构建服务器
		+ Jenkins
	+ 工件库
		+ Java世界里，流行的方案是Sonatype Nexus。
		+ amazon的S3服务。
	+ 包管理器
		+ Red Hat系统上：`yum`和`dnf`
		+ Debian系统上：`aptitude/dpkg`
	+ 测试环境
	+ 预发布/生产
	+ 发布管理
	+ Scrum、看板和交付流水线
		+ Scrum：关注的sprint周期，可以隔周或每月。
		+ 看板：关注的是更短的周期，可以说是每天。
+ *我们本质上需要两个或两个以上的、被维护着并且相互隔离的环境。* （Vagrant虚拟同，AWS云实例，Docker容器）

###  chap3 DevOps如何影响架构 P19/200
+ 介绍软件架构
+ 

###  chap4 一切皆代码 P35/200
+ 软件即服务的解决方案：GitHub、Bitbucket或GitLab。
+ 云提供商：AWS或Rackspace。
+ 源代码管理历史
	+ 把源代码的历史版本存放在不同的档案里
	+ 签入和签出的集中式源代码管理(RCS、SCCS)
	+ 一个集中式的存储，在提交之前需要合并（CVS、Subversion）
	+ 去中心化的存储。
+ *选对wiki引擎的话，把所有文档都以wiki的形式存放在集中式源代码库里是可行的。*
+ **分支策略**
+ 工件版本命名  [SemVer](http://semver.org)
+ Gerrit
	+ 基于Git的代码审查工具
	+ 

###  chap5 构建代码 P55/200   