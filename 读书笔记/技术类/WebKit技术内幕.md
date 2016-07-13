##  内容
###  chap1 浏览器和浏览器内核
+ 1.1 浏览器
	+ Berners-Lee，世界上第一个浏览器WorldWideWeb，91年公布了源代码。
	+ Marc Andreessen，Mosaic浏览器，1993年。
	+ 1995年，微软的Internet Explorer。
+ 1.2 浏览器内核及特性
	+ **浏览器内核**主要作用是将页面转变成可视化的图像结果。 *渲染引擎*就是能够将HTML/CSS/JavaScript文本及其相应的资源文件转换成图像结果的模块。主流渲染引擎包括Trident,Gecko和WebKit。
	+ *渲染引擎*主要包括HTML解释器，CSS解释器，布局和JavaScript引擎。
	+ *典型的渲染过程*：首先是网页内容，输入到HTML解释器，HTML解释器在解释它后构建成一棵DOM树，这期间如果遇到JavaScript代码则交给JavaScript引擎去处理；如果网页中包含CSS，则交给CSS解释器去解释。当DOM建立的时候，渲染引擎接收来自CSS解释器的样式信息，构建一个新的内部绘图模型。该模型由布局模块计算模型内部各个元素的位置和大小信息，最后由绘图模块完成从该模型到图像的绘制。
+ 1.3 WebKit内核


###  chap2 HTML网页和结构
+ 2.1 网页构成
	+ HTML网页是一种半结构化的数据表现方式。它的结构特征可以归纳为三种：树状结构，层次结构和框结构。
+ 2.2 网页结构
	+ 框结构：frameset,frame,iframe
	+ 层次结构：根层，层1，层2
+ 2.3 WebKit的网页渲染过程

###  chap3 WebKit架构和模块

###  chap4 资源加载和网络栈
+ 使用网络栈来下载网页和网页中的资源是渲染引擎工作过程的第一步。
+ 4.1 WebKit资源加载机制
	+ WebKit中的公共基类是CachedResource
	+ WebKit从资源池中查找资源的关键字是URL
+ 4.2 