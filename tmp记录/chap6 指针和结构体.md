##  chap6 指针和结构体

###  6.1 介绍
```
typedef struct _person{  
char* firstName;  
char* lastName;  
char* title;
unsigned int age;
}Person
```  
`Person person`  
`Person *ptrPerson;`  
`ptrPerson = (Person*)malloc(sizeof(Person));`

+ 为结构体分配内存
	+ 谨慎使用指针算术运算
	+ 结构体数组的元素之间可能存在额外的内存

###  6.2 结构体释放问题


###  6.3 避免malloc/free开销


###  6.4 用指针支持数据结构
+ 链表（单链表）
+ 队列（简单的先进先出队列）
+ 栈（简单的栈）
+ 树（二叉树）





##  思考
+ 箭头操作符和点操作符的本质的区别？