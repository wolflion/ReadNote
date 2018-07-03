/*
2-10 内有一个带有默认参数的函数，其含有两个参数：一个是字符类型，另一个是整数类型。
这个函数能够输出一行重复的字符，重复的字符和次数由传送给函数的字符和整数决定的。
*/

#include <iostream>

using namespace std;

void fun(char PrChar='$',int num=10);

int main()
{
	char ch;
	int num;
	ch = '#';
	num = 20;
	fun(ch,num);//调用定义的
	fun();//调用默认的
	fun('&');//第2个是默认的
	return 0;
}

void fun(char ch,int num)
{
	for(int i=0;i<num;i++)
	{
		cout <<ch;
	}
	cout <<"\n";
}