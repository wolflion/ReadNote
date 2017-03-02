##  缘起
+ 2017-03-01开始看第1个番茄钟。

##  内容
###  chap1 认识UML  1/280
+ 1.1 统一建模语言
	+ **用例图**：表示系统对外提供的服务
	+ **序列图**（Sequence Diagram）：表示软件内部对象交互的情况
+ 1.2 UML图
	+ **类图**：呈现系统内部的静态结构。
		+ 属性
		+ 操作
		+ 实线是**关联关系**（association relationship)
		+ 实心菱形实线是**组合关系**（compostition relationship）
		+ 三角形实线是**泛化关系**（generalization relationship）
	+ **序列图**（表达对象外部的交互行为）
	+ **用例图**：表示系统的“外部”行为
	+ **状态图**：让我们聚焦在单一种类的对象本身，表达对象在生存期内可以出现的状态变化。（表达对象内部的状态变化）
	+ **活动图**：适合表达一连串的动作。
+ 1.3 UML工具
	+ [StarUML](http://staruml.io/) 
		+ 支持Gof中的23种软件模式以及支持3种常用*EJB模式*
			+ EntityEJB，MessageDrivenEJB，SessionEJB
		+ starUML为State模式自动输出的C++的代码 *lionel，如何实现？*
	+ IBM RSA
	+ Case complete

###  chap2 UML-C++先睹为快 16/280

###  chap3 C++文件结构  29/280
+ 3.1 Dev-C++
+ 3.2 C++文件结构 
+ 3.3 重用类的代码 

###  chap4 重要的OO及UML概念 38/280
+ 4.1 对象
+ 4.2 属性与操作  