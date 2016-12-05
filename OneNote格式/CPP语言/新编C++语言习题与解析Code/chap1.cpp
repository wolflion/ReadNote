#include <iomanip>
#include <iostream>
using namespace std;;

/*《新编C++语言习题与解析》chap1 C++语言概述 */

//例1.68 输入年，月，打印出该年该月的天数
void fun168()
{
	int year,mon,days,leap;
	cout << "年 月：";
	cin >> year >> mon;
	switch(mon)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	case 2:  // 判断是不是闰年
		if(year%400 == 0) 
			leap = 1;
		else if(year%4 == 0 && year%100 != 0)
			leap = 1;
		else
			leap = 0;
		if(leap)
			days = 29;
		else
			days = 28;
	}
	cout << year << "年" << mon << "月的天数为:" << days << endl;
}

//例1.69 从键盘输入一个偶数，输出该偶数写成的两个素数之和

int main()
{
	fun168();
	system("pause");
}