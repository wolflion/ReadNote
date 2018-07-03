// 2-8 编写一程序，其中声明了一个枚举类型，并定义了两个枚举变量，考查对枚举变量的操作。
#include <iostream>
using namespace std;
int main()
{
	enum color
	{
		RED = 1 ,
		GREEN = 6,
		BLUE = 9
	};

	enum color v1 = RED,v2;
	cout <<"RED=" << RED << endl;//1
	cout <<"GREEN=" << GREEN << endl;//6
	cout <<"BLUE=" << BLUE << endl;//9
	cout <<"v1="<<v1<<endl;//v1=1
	v2=GREEN;
	cout<<"(v1<v2)="<<(v1<v2)<<endl;//1<6
}
//演示了如何声明枚举类型，定义枚举变量以及对枚举变量的输出和运算。