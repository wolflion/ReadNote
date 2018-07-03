/*
 * 3-27：分析程序
 */

 #include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
using namespace std;

class example27
{
	int i;
public:
	example27(int n)
	{
		i = n;
		cout << "Constructing" << endl;
	}
	~example27()
	{
		cout << "Destructing" << endl;
	}
	int get_i()
	{
		return i;
	}
};

int sqr_it(example27 o)
{
	return o.get_i() * o.get_i();
}

void testexample27()  // 调用一次构造函数，却调用了两次析构函数
{
	example27 x(10);
	cout<<x.get_i()<<endl;
	cout<<sqr_it(x)<<endl;
	//return 0;
}