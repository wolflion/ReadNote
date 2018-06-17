/*
* C++�������������ϰ��������ϻ�ָ��
* Chap4 �̳�������
*/

//4-1 ����������
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
	C ob;//����˳��ABC������˳����CBA
	return 0;
}

//4-2 ����һ������building�����б�����Աfloors,rooms��square���ֱ�������ʾһ��¥���Ĳ������������Լ�������������� 
class building  // ����building
{
protected:
	int floors;
	int rooms;
	double square;
};

// ������building��������house������˽�г�Աbedrooms��balcony���ֱ�������ʾ��������̨��������
class house:public building // Ĭ�ϵļ̳з�ʽ��ɶ��
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

// ������building��������office������˽�г�Աphones��meeting_rooms���ֱ�������ʾ�绰������ҵ���Ŀ��
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

//4-11 ���й��캯���Ķ��ؼ̳б�дһ������Ҫ���ڸó�����Ӧ�������
class Person
{
protected:
	char *m_name;
	int m_age;
public:
	Person(char *name, int age)
	{
		m_name = new char[strlen(name)+1];
		strcpy(m_name,name); // ָ��Ļ�����Ҫstrcpy
		m_age = age;
		cout << "Person Name=" << m_name << endl;
	}
	~Person()
	{
		delete m_name; //����ʱ��Ҫɾ��ָ������
	}
};

class Student:public virtual Person
{
protected:
	long int m_classnu;
public:
	Student(char *name, int age, long int classnu):Person(name,age) //�����ʲô�﷨��
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
		Student(name,age,classnu),Employee(name,age,wage)//ʲô�﷨��
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
// ��ʼ�������ͷ�����಻ͬ�ĵط�
// ���ؼ̳еĹ��캯��ִ����ѭ��ִ�л���Ĺ��캯������ִ�ж����Ա�Ĺ��캯�������ִ�������๹�캯����ԭ��
