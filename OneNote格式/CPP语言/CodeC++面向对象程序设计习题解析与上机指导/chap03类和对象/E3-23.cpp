/*
 * 3-23：说明当构造函数具有一个以上的参数时，如何对数组对象进行初始化。
 */
#include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
using namespace std;
 
class example23
{
	int x,y;
	example23(int n, int m)
	{
		x = n;
		y = m;
	}
	int get_x()
	{
		return x;
	}
	int get_y()
	{
		return y;
	}
};

void testexample23()
{
	example23 op[3][2] = {   // 数组对象op通过直接调用构造函数声明，并初始化
		example23(1,2),example23(3,4),
		example23(5,6),example23(7,8),
		example23(9,10),example23(11,12)
	};
	int i;
	for (i = 0; i < 3; i++)
	{
		cout << op[i][0].get_x()<<' ';
		cout << op[i][0].get_y()<<'\n';
		cout << op[i][1].get_x()<<' ';
		cout << op[i][1].get_y()<<'\n';
	}
	cout << "\n";
	// return 0;
}
