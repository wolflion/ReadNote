/*
* 分析程序的运行结果
*/

#include <iostream>
using namespace std;

class Base
{
public:
	void show()
	{
		cout << "Parent class.\n";
	}
};

class First:public Base
{
public:
	void show()
	{
		cout << "First Derived class.\n";	
	}
};

class Second:public Base
{
public:
	void show()
	{
		cout << "Second Derived class.\n";	
	}	
};

int main()
{
	Base b1;
	Base *ptr;
	First f1;
	Second s1;
	ptr = &b1;
	ptr->show();
	ptr=&f1;
	ptr->show();
	ptr=&s1;
	ptr->show();
	return 0;
}