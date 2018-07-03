/*
* C++面向对象程序设计习题解析与上机指导
* Chap4 继承与派生
*/

//4-1 分析程序结果
class A
{
public:
	A()
	{
		cout<<"Constructing A\n";
	}
	~A()
	{
		cout<<"Destructing A\n";
	}
};

class B
{
public:
	B()
	{
		cout<<"Constructing B\n";
	}
	~B()
	{
		cout<<"Destructing B\n";
	}
};

class C:public A,public B
{
public:
	C()
	{
		cout<<"Constructing C\n";
	}
	~C()
	{
		cout<<"Destructing C\n";
	}
};

int fun401()
{
	C ob;//创建顺序ABC，析构顺序是CBA
	return 0;
}

//4-2 建立一个基类building，含有保护成员floors,rooms和square，分别用来表示一座楼房的层数，房间数以及它的总面积数。 
class building  // 基类building
{
protected:
	int floors;
	int rooms;
	double square;
};

// 建立类building的派生类house，含有私有成员bedrooms和balcony，分别用来表示卧室与阳台的数量。
class house:public building // 默认的继承方式是啥？
{
	int bedrooms;
	int balcony;
public:
	house(int f,int r,double sq, int br, int bal)
	{
		floors = f;
		rooms = r;
		square = sq;
		bedrooms = br;
		balcony = bal;
	}
	void show()
	{
		cout << "floors:"<<floors<<'\n';
		cout << "rooms:"<<rooms<<'\n';
		cout << "square measure:"<<square<<'\n';
		cout << "bedrooms:"<<bedrooms<<'\n';
		cout << "balcony:"<<balcony<<'\n';
	}
};

// 建立类building的派生类office，含有私有成员phones和meeting_rooms，分别用来表示电话与会议室的数目。
class office:public building
{
	int phones;
	int meeting_rooms;
public:
	office(int f,int r,double sq, int p, int mee)
	{
		floors = f;
		rooms = r;
		square = sq;
		phones = p;
		meeting_rooms = mee;
	}
	void show()
	{
		cout << "floors:"<<floors<<'\n';
		cout << "rooms:"<<rooms<<'\n';
		cout << "square measure:"<<square<<'\n';
		cout << "telephones:"<<phones<<'\n';
		cout << "meeting_rooms:"<<meeting_rooms<<'\n';
	}
};

int fun402()
{
	house hou(6,120,5000,100,80);
	office off(12,80,12000,140,18);
	cout<<"House: \n";
	hou.show();
	cout << "\n Office: \n";
	off.show();
	return 0;
}

//4-10 

//4-11 含有构造函数的多重继承编写一个程序，要求在该程序中应用虚基类
class Person
{
protected:
	char *m_name;
	int m_age;
public:
	Person(char *name, int age)
	{
		m_name = new char[strlen(name)+1];
		strcpy(m_name,name); // 指针的话，需要strcpy
		m_age = age;
		cout << "Person Name=" << m_name << endl;
	}
	~Person()
	{
		delete m_name; //析构时需要删除指针数据
	}
};

class Student:public virtual Person
{
protected:
	long int m_classnu;
public:
	Student(char *name, int age, long int classnu):Person(name,age) //这个是什么语法？
	{
		m_classnu = classnu;
		cout << "Student Name="<<m_name<<endl;
	}
	~Student()
	{

	}
};

class Employee:public virtual Person
{
protected:
	float m_wage;
public:
	Employee(char *name, int age, float wage):Person(name,age)
	{
		m_wage = wage;
		cout << "Employee Name="<<m_name<<endl;
	}
	~Employee()
	{

	}
};

class SideLine:public Student,public Employee
{
public:
	SideLine(char* name, int age, long int classnu,float wage):Person(name,age),
		Student(name,age,classnu),Employee(name,age,wage)//什么语法？
	{
		cout<<"SideLine Name="<<m_name<<endl;
	}
	~SideLine()
	{

	}
};

int fun411()
{
	SideLine obj("Angel",20,20000103,3000);
	return 0;
}
// 初始化虚基类和非虚基类不同的地方
// 多重继承的构造函数执行遵循先执行基类的构造函数，再执行对象成员的构造函数，最后执行派生类构造函数的原则
