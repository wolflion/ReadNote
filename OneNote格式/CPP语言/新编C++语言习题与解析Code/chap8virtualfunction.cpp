#include <iostream>
#include <math.h>
using namespace std;

/*静态联编的例子*/
# if 0
class Point{
	int x,y;
public:
	Point(int x1,int y1)
	{
		x = x1;
		y = y1;
	}
	int area() const 
	{
		return 0;
	}
};

class Rect : public Point
{
	int l,w;
public:
	Rect(int x1,int y1, int l1,int w1):Point(x1,y1)
	{
		l = l1;
		w = w1;
	}
	int area() const
	{
		return l*w;
	}
};

void fun(Point &p)
{
	cout << p.area() << endl;// 关联到Point::area()定义的代码上
}

int main()
{
	Rect rec(2,4,10,6);
	fun(rec);
}
#endif

/*动态联编的例子*/
# if 0
class Point{
	int x,y;
public:
	Point(int x1,int y1)
	{
		x = x1;
		y = y1;
	}
	virtual int area() const  //声明为虚函数
	{
		return 0;
	}
};

class Rect : public Point
{
	int l,w;
public:
	Rect(int x1,int y1, int l1,int w1):Point(x1,y1)
	{
		l = l1;
		w = w1;
	}
	virtual int area() const //虚函数，这个完全可以不好，基类中的虚函数在派生类中自然是虚函数。
	{
		return l*w;
	}
};

void fun(Point &p)
{
	cout << p.area() << endl;// 关联到Point::area()定义的代码上
}

int main()
{
	Rect rec(2,4,10,6);
	fun(rec);
}
#endif