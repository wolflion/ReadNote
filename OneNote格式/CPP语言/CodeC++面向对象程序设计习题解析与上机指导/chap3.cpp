/*
 * chap3 类和对象
 */
#include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
using namespace std;

/*
 * 3-2：售书程序。
 */
class Book
{
private:
	int price;
	int count;
	long total;
public:
	void input(int p,int c);
	void compute();
	void print();
};

void Book::input(int p,int c)
{
	price = p;
	count = c;
}

void Book::compute()
{
	total = (long)price * count;
}

void Book::print()
{
	cout << price << count << total << endl;
}

void testBook()
{
	Book *bk;
	bk = new Book[6];
	bk[0].input(25,130);
	bk[1].input(30,35);
	bk[2].input(15,20);
	bk[3].input(25,120);
	bk[4].input(45,10);
	bk[5].input(85,65);
	for(int i=0;i<6;i++)
	{
		bk[i].compute();
	}
	clrscr(); // system("cls");
	for(int i=0;i<6;i++)
	{
		bk[i].print();
	}
	delete bk;
}

/*
 * 3-3：vector。
 */

/*
 * 3-13：time_data，带参数的构造函数。
 */
class time_data
{
private:
	time_t systime;
public:
	time_data(time_t t); // 带参数的构造函数
	void show();
};

time_data::time_data(time_t t)
{
	systime = t;
}

void time_data::show()
{
	cout << ctime(&systime);
}

void testTime_data()
{
	time_t x;
	x = time(NULL);
	time_data ob(x);
	ob.show();
	//return 0;
}

/*
 * 3-15：重载构造函数。
 */
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