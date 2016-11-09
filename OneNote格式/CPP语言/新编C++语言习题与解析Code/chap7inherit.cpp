#include <iostream>
#include <string>
using namespace std;

/*7.1.4 引入虚基类的原因*/
# if 0
class A
{
protected:
	int a;
public:
	A()
	{
		a = 10;
	}
};

class B1 : virtual public A
//class B1 : public A
{
public:
	B1()
	{
		cout << a << endl;
	}
};

class B2 : virtual public A
//class B2 : public A  
{
public:
	B2()
	{
		cout << a << endl;
	}
};

class C : B1,B2
{
public:
	C()
	{
		cout << a << endl;  //如果B1和B2不是虚继承，那么会有error C2385：对"a"的访问不明确。
	}
};

int main()
{
	C obj;
	system("pause");
	return 0;
}
#endif

/*7.1.4 虚基类的初始化*/
#if 0
class Base1
{
public:
	Base1()
	{
		cout << "class base1" << endl;
	}
};

class Base2
{
public:
	Base2()
	{
		cout << "class base2" << endl;
	}
};

class Level1 : public Base2,virtual public Base1
{
public:
	Level1()
	{
		cout << "class level1" << endl;
	}
};

class Level2 : public Base2,virtual public Base1
{
public:
	Level2()
	{
		cout << "class level2" << endl;
	}
};

class topLevel : public Level1,virtual public Level2
{
public:
	topLevel()
	{
		cout << "class toplevel" << endl;
	}
};

int main()
{
	topLevel obj;
	system("pause");
	return 0;
}
#endif

/*例7.50实现医学院教师(兼任医生)的数据操作.**/
class Person
{
	int number;      // Number
	char name[10];   // Name
public:
	void setperson(int number1, char name1[])
	{
		number = number1;
		strcpy(name,name1); // 必须用拷贝的方法
	}
	void dispperson()
	{
		cout << number << endl;
		cout << name << endl;
	}
};

class Teacher : virtual public Person
{
	char depart[20];
	char title[10];
public:
	void setteacher(char depart1[], char title1[])
	{
		strcpy(depart,depart1);
		strcpy(title,title1); 
	}
	void dispteacher()
	{
		cout << depart << endl;
		cout << title << endl;
	}
};

class Doctor : virtual public Person
{
	char room[20];
	char major[10];
public:
	void setdoctor(char room1[], char major1[])
	{
		strcpy(room,room1);
		strcpy(major,major1); 
	}
	void dispdoctor()
	{
		cout << room << endl;
		cout << major << endl;
	}
};

class techdoc : public Teacher,public Doctor
{
public:
	void settechdoc(int number1,char name1[],char depart1[],char title1[],char room1[],char major1[])
	{
		setperson(number1,name1);
		setteacher(depart1,title1);
		setdoctor(room1,major1);
	}
	void distechdoc()
	{
		dispperson();
		dispteacher();
		dispdoctor();
	}
};

int main()
{
	techdoc obj;
	obj.settechdoc(1,"jerry","information","prof","in","check");
	obj.distechdoc();
	system("pause");
}