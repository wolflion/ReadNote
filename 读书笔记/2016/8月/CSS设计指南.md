##  缘起
+ 看别人推荐的，2013年5月第1版。
+ 《Stylin's with CSS A Designer's Giude》（3rd）
+ 第二版的中文名是《写给大家看的CSS书》
+ 在按章发布，敏捷出版的实践上得出 *中国读者实际上不是不善于交流，而是对基础知识掌握不够牢固，不敢交流。*
+ [代码下载](http://www.stylinwithcss.com)

##  内容
###  chap1 HTML标记与文档结构
+ 目前一共有114个标签，常用的25个应该能满足80%的标记需要。
####  1.1 HTML标记基础
+ 文本内容用 **闭合标签**,包含的是会显示的实际内容。 
+ 引用内容用 **自闭合标签**, 只是给浏览器提供一个对要显示内容的引用。
	+ *浏览器会在HTML页面加载的时候，额外向服务器发送请求，以取得自闭合标签引用的内容。*
+ 属性  [链接](http://htmldog.com/reference/htmltags)
+ 标题与段落   {文档流，行内元素，块级元素}
+ 复合元素     {由多个标签共同构成}
+ 嵌套标签  

#### 1.2 HTML文档剖析
+ HTML模板
+ 块级元素和行内元素
	+ “文档流”就是HMTL元素会按照它们各自在标记中出现的先后顺序，依次从页面上方“流向”下方。
	+ **块级元素** 会相互堆叠在一起沿页面向下排列，每个元素分别占一行。
	+ **行内元素** 会相互并列，只有在空间不足以并列的情况下才会折到下一行显示。
	+ Firefox中的 *Web Developer* 扩展。
+ 嵌套的元素
	+ Outline菜单中选择Outline Custom Elements命令。
	+ **blockqoute元素**包含引用内容，而且在页面上看起来是独立的元素。
	+ 使用`&amp`;实体，才能显示出&来。
	+ `&ldquo;`和`&rdquo;` 用于生成能够正确打印出来的左，右双引号。
	+ `<strong>`标签表示重要，默认以粗体显示。
	+ `<em>`标签表示强调，默认以斜体显示。
	+ `<abbr>`标签表示简写，在Firefox中默认会加上点下划线。

#### 1.3 文档对象模型
+ DOM是从浏览器的视角来观察页面中的元素以及每个元素的属性，由此得出这些元素的一个家族树。
+ 结构化的标签`<section>`

###  chap2 CSS工作原理
#### 2.1 剖析CSS规则

#### 2.2 上下文选择符

#### 2.3 特殊的上下文选择符

#### 2.4 ID和类选择符
+ 类属性
+ ID属性

#### 2.5 属性选择符
+ 属性名选择符
+ 属性值选择符

###  chap3 定位元素
#### 3.1 理解盒模型

#### 3.2 盒子有多大

###  chap4 字体和文本
#### 4.1 字体
+ 网页中的字体有三个来源
	+ 用户机器中安装的字体
	+ 保存在第三方网站的字体（Typekit和Google，可以使用link标签把它们链接到你的页面上）
	+ 保存在web服务器上的字体（使用@font-face规则随网页一起发送给浏览器）
+ 与字体样式相关的6个属性
	+ font-family(字体族)
		+ 是可以继承的属性
	+ font-size
		+ 是可以继承的属性
	+ font-style(字体样式)
	+ font-weight(字体粗细)
		+ 只有bold和normal两个值
	+ font-variant(字体变化)
		+ 只有small-caps和normal两个值
	+ font(简写属性)
		+ 规则一：必须声明font-size和font-family的值
		+ 规则二：所有值必须按如下顺序声明
			+ font-weight,font-style,font-variant不分先后；
			+ 然后是font-size;
			+ 最后是font-family。
+ **字体属性**描述一类字体的大小和外观。 **文本属性**描述对文本的处理方式。比如行高或字符间距。

#### 4.2 文本属性
+ text-indent(文本缩进)
+ letter-spacing(字符间距)
+ word-spacing(单词间距)
+ text-decoration(文本装饰)
	+ 值：underline,overline,line-through,blink,none
+ text-align(文本对齐)
	+ 值：left,right,center,justify
+ line-height()
+ text-transform(文本转换)
	+ 值：none,uppercase,lowercase,capitalize
+ vertical-align(垂直对齐)
	+ 值：任意长度值以及sub,super,top,middle,bottom等。

#### 4.3 Web字体大揭秘
设定Web字体的三种方式
	
+ 使用Google Web Fonts或Adobe的Typekit等公共字体库
+ 使用事先打包好的@font-face包
+ 使用Font Squirrel用你自己的字体生成@font-face包

#### 4.3 文字版式
+ 简单的文本布局
+ 基于网格排版
+ 经典的排版练习

###  chap5 页面布局
+ 用内部DIV创建浮动的栏，用box-sizing属性代替内部DIV，也可以使用让元素行为跟表格一样的CSS3的display属性。

#### 5.1 布局的基本概念
+ **多栏布局**有三种基本的实现方案：固定宽度，流动，弹性。


###  chap6 界面组件
###  6.1 导航菜单
###  6.2 表单
###  6.3 弹出层

