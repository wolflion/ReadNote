#include <iostream>
using namespace std;

/*10.1.1 异常处理的执行过程*/
#if 0
int f(int);
int main()
{
	try
	{
		cout << "4!=" << f(4) << endl;
		cout << "-2!=" << f(-2) << endl;
		cout << "5!=" << f(5) << endl;
	}
	catch (int n)
	{
		cout << "n=" << n << "不能计算!." << endl;
	}
	cout << "程序执行结束." << endl;
	system("pause");
	return 0;
}

int f(int n)
{
	if(n <= 0)
		throw n;
	int s = 1;
	for (int i = 1; i <= n; i++)
	{
		s *= i;
	}
	return s;
}
#endif

/*10.1.1 捕获所有类型的异常*/
void f(int code)
{
	try
	{
		if ( code == 0)
		{
			throw code;//引发int类型的异常
		}
		if ( code == 1)
		{
			throw 'x';//引发字符类型的异常
		}
		if ( code == 2)
		{
			throw 12.345;//引发double类型的异常
		}
	}
	catch(int n)
	{
		cout << "捕获整数类型：" << n << endl;
	}
	catch(...)
	{
		cout << "默认捕获." << endl;
	}
	return;
}

int main()
{
	f(0);
	f(1);
	f(2);
	system("pause");
	return 0;
}