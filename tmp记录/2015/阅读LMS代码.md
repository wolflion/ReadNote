###index.html
跳转到app.js  

###app.js
`Ext.application({`//表示应用有一个页面，应用的父容器为Viewpoint  
`name: "Lms",`//声明应用名称，并作为命名空间    
`launch: function(){this.getController("main.Main");}})`//创建一个启动(launch)函数，这个函数将在应用的所有控制器初始化完成后被调用  

**Viewpoint是一个特殊的容器，表示应用的可视区域，在HTML页面的body标签里渲染，决定应用在浏览器中的显示尺寸及窗体缩放**  


###controller
**存放控制器类，控制器类处理组件的事件触发**  
*ExtJS是事件驱动的，在控制器类中控制事件，并在必要时修改模型，视图或存储器*  
 
+ main\Main.js  
+ 具体创建的对象  


###model
模型为拥有一组字段的ExtJS类，代表应用管理的对象。  
`Ext.define("Lms.model.book.Book",{`    
`extend:'Ext.data.Model',`  
`fields:[{name:'id',type:'int',mapping:'ID'}]});`  
**book是文件夹名，Book是Book.js的名称**  

###store
**存放存储器类，是模型集合的缓存。存储器类用代理进行模型数据的加载和保存**  
*ExtJS不具备跟数据库直接通信的能力*  

###view  
**存放视图类，视图类只处理界面呈现，不处理组件的事件触发**  

###resources  
**放置创建应用所需的所有CSS样式文件**  