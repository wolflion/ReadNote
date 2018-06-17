//7-3 分别计算5!和10!的值，使用setw()控制"="左边的数值宽度。

#include <iostream>
//#include <iomanip.h>
#include <iomanip>
using namespace std;

double fact(int n);
int main()
{
	for(int n=5;n<11;n++)
		cout << setw(2)<<n<<"!="<<fact(n)<<endl;
	return 0;
}

double fact(int n)
{
	double factor = 1;
	for(int i=n;i>=1;i--)
		factor *= i;
	return factor;
}