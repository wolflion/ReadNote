/*
* 当输入n值，当n为正整数时计算n!的值，n为负数时用cerr显示错误信息。
*/

#include <iostream>
#include <process.h>
using namespace std;

int main()
{
	int n;
	unsigned long factor = 1;
	cout << "Enter a number:";
	cin >> n;
	for(int i=n;i>=1;i--)
		factor *= i;
	long ans = (n>0?factor:-1);
	if(ans>=0)
		cout<<n<<"!="<<ans;
	else
	{
		cerr<<"Invalid minus number! \n";
		exit(1);
	}
}