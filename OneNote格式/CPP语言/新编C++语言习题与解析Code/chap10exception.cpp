#include <iostream>
using namespace std;

/*10.1.1 �쳣�����ִ�й���*/
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
		cout << "n=" << n << "���ܼ���!." << endl;
	}
	cout << "����ִ�н���." << endl;
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

/*10.1.1 �����������͵��쳣*/
void f(int code)
{
	try
	{
		if ( code == 0)
		{
			throw code;//����int���͵��쳣
		}
		if ( code == 1)
		{
			throw 'x';//�����ַ����͵��쳣
		}
		if ( code == 2)
		{
			throw 12.345;//����double���͵��쳣
		}
	}
	catch(int n)
	{
		cout << "�����������ͣ�" << n << endl;
	}
	catch(...)
	{
		cout << "Ĭ�ϲ���." << endl;
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