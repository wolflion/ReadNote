/*
* C++面向对象程序设计习题解析与上机指导
* Chap5 多态性与虚函数
*/

#include <iomanip>
#include <iostream>
#include <cmath>
#include <malloc.h>
#include <conio.h>
using namespace std;;




//5-14使用成员运算符函数，针对类three_d重载"=="和"!="运算符
class three_d
{
	int A,B,C;
public:
	three_d(int i,int j, int k)
	{
		A = i;
		B = j;
		C = k;
	}
	three_d()
	{
		A = 0;
		B = 0;
		C = 0;
	}
	int operator==(three_d ob2);
	int operator!=(three_d ob2);
};

int three_d::operator==(three_d ob2)
{
	return(A==ob2.A &&B==ob2.B&&C==ob2.C);
}

int three_d::operator!=(three_d ob2)
{
	return(A != ob2.A && B != ob2.B && C!=ob2.C);
}

int fun514()
{
	
	three_d op1(10,10,10),op2(2,3,4);
	if (op1 == op1)
	{
		std::cout<<"op1 == op2\n";
	}
	if (op1 != op2)
	{
		std::cout<<"op1 != op2\n";
	}
	return 0;
}



// 5-25 用构造函数对不同的类型进行转换。设计将英制转换为公制的构造函数时，采用在类内声明的方式；// 与采用类外声明有什么区别？
class Metric;
class English
{
	int foot,inch;
public:
	English()
	{
		foot = inch = 0;
	}
	English(int val1, int val2)
	{
		foot = val1;
		inch = val2;
	}
	void display()
	{
		cout << foot << "ft. " << inch << "in. " << endl;
	}

	int ret_foot()   
	{
		return foot;
	}

	int ret_inch()
	{
		return inch;
	}
	English(Metric);
};

class Metric
{
	int metre,cm;
public:
	Metric()
	{
		metre = cm = 0;
	}
	Metric(int val1,int val2)
	{
		metre = val1;
		cm = val2;
	}
	void display()
	{
		cout << metre << "m" << cm << "cm" << endl;
	}
	int ret_metre()
	{
		return metre;
	}
	int ret_cm()
	{
		return cm;
	}

	Metric(English E) // 转换英制到公制
	{
		int foot = E.ret_foot(); // 只有类中的成员函数可访问该类的私有成员
		int inch = E.ret_inch();
		metre = (foot+inch/12.0) * 0.305;  // warning C4244: “=”: 从“double”转换到“int”，可能丢失数据
		cm = ((foot+inch/12.0)*0.305-metre) * 100;
	}
};

English::English(Metric C) // 转换公制到英制
{
	int metre = C.ret_metre();
	int cm = C.ret_cm();
	foot = (metre + cm * 0.01)/0.305;
	inch = ((metre + cm * 0.01)/0.305 - foot) * 12;
}

void fun525()
{
	English A(10,10);
	Metric B;
	B = A;
	cout << "The distance for object A is : ";
	A.display();
	cout << "The distance for object B is : ";
	B.display();
	Metric C(10,10);
	English D;
	D = C;
	cout << "The distance for object C is : ";
	C.display();
	cout << "The distance for object D is : ";
	D.display();
}


