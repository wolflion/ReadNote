##  内容
###  ORM相关
+ 名词解释
	+ Object Relational Mapping：解决一种为了**解决面向对象与关系数据库存在的互不匹配**的现象的技术。
	+ 简单说：通过使用描述对象和数据库之间映射的元数据，将程序中的对象自动持久化到关系数据库中。
	+ **本质上**：将数据从一种形式转换到另外一种形式。
	+ 业务实体在内存中表现为对象，在数据库中表现为关系数据。
		+ 内存中的对象之间存在关系和继承关系
		+ 在数据库中，关系数据无法直接表达多对多关联和继承关系
+ 一般的ORM包括以下四部分 
	+  一个对持久类对象进行CRUD操作的API；
	+  一个语言或API用来规定与类和类属性相关的查询；
	+  一个规定mapping metadata的工具；
	+  一种技术可以让ORM的实现同事务对象一起进行dirty checking, lazy association fetching以及其他的优化操作    一个规定mapping metadata的工具；
+ ORM好处
	+ 消除了数据访问层大量重复性劳动，为平台应用多数据库提供了支持。
+ ORM产品
	+ NHibernate、IBatis.NET、DBLinq

###  没使用ORM之前
+ 当你开发一个应用程序的时候(不使用O/R Mapping),你可能会写不少数据访问层的代码，用来从数据库保存，删除，读取对象信息，等等。你在DAL中写了很多的方法来读取对象数据，改变状态对象等等任务。而这些代码写起来总是重复的。
+ 我们以保存对象的方法为例，你传入一个对象，为SqlCommand对象添加SqlParameter，把所有属性和对象对应，设置SqlCommand的CommandText属性为存储过程，然后运行SqlCommand。对于每个对象都要重复的写这些代码。
+ 引入一个O/R Mapping。实质上，一个O/R Mapping会为你生成DAL。与其自己写DAL代码，不如用O/R Mapping。你用O/R Mapping保存，删除，读取对象，O/R Mapping负责生成SQL，你只需要关心对象就好。

##  参考
+ [ORM技术概念与实例](http://blog.csdn.net/heipacker/article/details/8653858)