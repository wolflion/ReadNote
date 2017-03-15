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

/*
 * 3-22：类example,定义一个两维对象数组，对它们进行初始化，并打印出来。
 */
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

/*
 * 3-23：说明当构造函数具有一个以上的参数时，如何对数组对象进行初始化。
 */
class example23
{
	int x,y;
	example23(int n, int m)
	{
		x = n;
		y = m;
	}
	int get_x()
	{
		return x;
	}
	int get_y()
	{
		return y;
	}
};

void testexample23()
{
	example23 op[3][2] = {   // 数组对象op通过直接调用构造函数声明，并初始化
		example23(1,2),example23(3,4),
		example23(5,6),example23(7,8),
		example23(9,10),example23(11,12)
	};
	int i;
	for (i = 0; i < 3; i++)
	{
		cout << op[i][0].get_x()<<' ';
		cout << op[i][0].get_y()<<'\n';
		cout << op[i][1].get_x()<<' ';
		cout << op[i][1].get_y()<<'\n';
	}
	cout << "\n";
	// return 0;
}

/*
 * 3-24：类cube，num初始化为1-10，将cub初化为num的三次方值。
 */
class cube
{
	int num,cub;
public:
	cub(int a ,int b)
	{
		num = a; 
		cub = b;
	}
	void show()
	{
		cout << num << ' ' << cub << endl;
	}
};

void testcube()
{
	cube ob[10] = {
		cube(1,1),
		cube(2,8),
		cube(3,27),
		cube(4,64),
		cube(5,125),
		cube(6,216),
		cube(7,343),
		cube(8,512),
		cube(9,729),
		cube(10,1000)
	};
	int i;
	for (i = 0; i < 10; i++)
	{
		ob[i].show();
	}
	// return 0;
}

/*
 * 3-25：通过对象指针来访问对象数组，使程序以相反的顺序显示对象数组的内容。
 */
// class的定义，同example23
void testexample25()
{
	example23 op[4] = {
		example23(1,2),
		example23(3,4),
		example23(5,6),
		example23(7,8)
	};
	int i;
	example23 *p;
	p = &op[3];  // 取出最后一个数组元素的地址
	for(i=0;i<4;i++)
	{
		cout << p->get_x() << ' ';
		cout << p->get_y() << "\n";
		p--; // 指向前一个数组元素
	}
	cout << endl;
}

/*
 * 3-27：分析程序
 */
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
