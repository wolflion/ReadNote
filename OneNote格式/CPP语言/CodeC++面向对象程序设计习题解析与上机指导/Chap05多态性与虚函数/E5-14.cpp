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