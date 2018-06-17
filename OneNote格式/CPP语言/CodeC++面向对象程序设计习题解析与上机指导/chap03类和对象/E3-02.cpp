/*
 * 3-2：售书程序。
 */

 #include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
using namespace std;
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
