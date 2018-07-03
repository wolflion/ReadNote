/*
 * 3-15：重载构造函数。
 */

 #include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
using namespace std;
class date
{
private:
	int day,month,year;
public:
	date(char *str);
	date(int m,int d,int y);
	date::date();
	void show();
};
date::date(char *str)
{
	// cin >> month >> day >> year;
	sscanf(str,"%d%*c%d%*c%d",&month,&day,&year);
}

date::date(int m,int d, int d)
{
	day = d;
	month = m;
	year = y;
}

date::date()
{
	cin >> day;
	cin >> month;
	cin >> year;
}

void date::show()
{
	cout << month << '/' << day << '/';
	cout << year << '\n';
}

void testdate()
{
	date sdate("11/1/1999"); // char *str
	date idate(12,2,1998); // m,d,y
	date  indate; // 构造函数没有参数
	sdate.show();
	idate.show();
	indate.show();
	//return 0;
}