##  缘起
+ 实验室师兄开会时老提到这些名词，但没有解释是啥？
+ 虽然以前也百度过，但2017-03才开始好好去参照MSDN和[oschina上TPH、TPT和TPC的讲解](https://my.oschina.net/wzzz/blog/494740)的内容。

##  内容
###  TPT（Table per Type）
+ 为基类和每个子类建立一个表，每个与子类对应的表中只包含了类特有的属性对应的列。
+ 子表通过主键找到父表。
+ **TPT的方式是在继承类上加上[Table]注解标签。**
+ [skcode博客的TPT方式](http://www.skcode.cn/archives/317) 
+ [weblogs的TPT](https://weblogs.asp.net/manavi/inheritance-mapping-strategies-with-entity-framework-code-first-ctp5-part-2-table-per-type-tpt)

###  TPH（Table per Hierarchy） **默认的继承**
+ 只建立一个表，把基类和子类中的所有属性都映射为表中的列。 *自动生成的discriminator列用来区分基类和子类的数据。*
+ 《EF6 Recipes》中的2-10.
	+ Employee、HourlyEmployee、FullTimeEmployee。
+ **TPH没有使用Table的注解标签** 
+ [skcode博客的TPH方式](http://www.skcode.cn/archives/322)
+ [weblogs的TPH](https://weblogs.asp.net/manavi/inheritance-mapping-strategies-with-entity-framework-code-first-ctp5-part-1-table-per-hierarchy-tph)
+ 因为只有一张表，添加子类和父类的表数据的方法。
	+ 必须用Fluent API配置，Data Annotation表示无能为力。

###  TPC（Table per Concrete Type）
+ 为每个子类建立一个表，每个与子类对应的表中包含基类的属性对应的列和子类特有属性对应的列。
	+ 即**子类也有了基类的属性**。 
+ **TPC方式需要使用[DatabaseGenerated]注解和fluent API配合使用**
	+ [DatabaseGenerated]`[DatabaseGenerated(DatabaseCeneratedOption.Identity)]`
	+ fluent API 方式 `OnModelCreating(){modelBuilder.Entity<Employee>().Map(m=>{m.MapInheritedProperties();m.ToTable("Employees");});}`
+ [skcode博客的TPC方式](https://weblogs.asp.net/manavi/inheritance-mapping-strategies-with-entity-framework-code-first-ctp5-part-3-table-per-concrete-type-tpc-and-choosing-strategy-guidelines)
+ 【我们实验室的例子】TPC各自维护自己的id。
	+ Achievemet 抽象父类（不生成表）
		+ paper  子类
		+ result  子类
	+ **局限性**
		+ paper和reuslt都有各自的id（1，2，3...），到achievement时，不知道关联哪个子类了。

##  具体怎么选
+ 不推荐使用TPC。
	+ *PTC方式中子类中包含的其他类的实例或实例集合不能被映射成表之间的关系*。
	+ 必须手动地在类中添加依赖类的主键属性，从而让Code First感知到它们之间的关系。
+ 从查询性能讲，TPH会好些。
	+ *TPH所有的数据都存在一个表中，不需要在数据查询时使用join。*
+ 从存储空间来说，TPT会好些。
	+ *TPH所有的列都在一个表中，有很多列的值是null。*
+ 从数据验证的角度来说，TPT会好些。
	+ *TPH中很多子类属性对应的列是可空的，为数据验证增加了复性。*

##  参考
+ [EF Code First 学习日记(9)-映射继承关系](http://www.cnblogs.com/lk8167/archive/2013/01/23/2873185.html)
+ [《EF 6 Recipes》chap1翻译版](http://www.cnblogs.com/yunxiaguo/p/5819518.html)
+ [EF Code First系列文章](http://www.cnblogs.com/oppoic/p/welcome_to_ef_code_first.html) 
+ [EF Code First 学习日记(1)](http://www.cnblogs.com/lk8167/archive/2013/01/07/2849443.html)

##  进阶
+ [EF Power Tool的使用](http://www.cnblogs.com/LingzhiSun/archive/2011/05/24/EFPowerTool_1.html)
	+ [工具下载](https://marketplace.visualstudio.com/items?itemName=EntityFrameworkTeam.EntityFrameworkPowerToolsBeta4)
+ [POCO class](http://fhuan123.iteye.com/blog/1110428)
	+ POCO是Plain Old CLR Object的缩写。
	+ POCO是不包括Insert、Add、Delete等数据持久化操作和不包括任何业务逻辑功能的原始类。
		+ **只包含最基本的Get和Set**
	+ POCO class用来Code First生成数据库。*代码先行，就是生成数据库，生成表，业务逻辑等等一切都在代码中实现。*
	+ [EF之POCO应用系列1](http://www.cnblogs.com/sunrfun/archive/2011/05/11/2042796.html)
