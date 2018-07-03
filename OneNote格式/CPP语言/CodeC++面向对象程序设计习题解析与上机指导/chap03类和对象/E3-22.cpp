/*
 * 3-22：类example,定义一个两维对象数组，对它们进行初始化，并打印出来。
 */

 #include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
using namespace std;
class example
{
	int x;
public:
	example(int n)
	{
		x = n;
	}
	int get_x()
	{
		return x;
	}
};

void testexample()
{
	example op[5][3] = {
		1,2,3,
		4,5,6,
		7,8,9,
		10,11,12,
		13,14,15
	};
	int i;
	for (i = 0; i < 5; i++)
	{
		cout << op[i][0].get_x()<<' ';
		cout << op[i][1].get_x()<<' ';
		cout << op[i][2].get_x()<<'\n';
	}
	cout << "\n";
	// return 0;
}
