#include <iostream>
#include <math.h>
using namespace std;

/*��̬���������*/
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
	cout << p.area() << endl;// ������Point::area()����Ĵ�����
}

int main()
{
	Rect rec(2,4,10,6);
	fun(rec);
}
#endif

/*��̬���������*/
# if 0
class Point{
	int x,y;
public:
	Point(int x1,int y1)
	{
		x = x1;
		y = y1;
	}
	virtual int area() const  //����Ϊ�麯��
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
	virtual int area() const //�麯���������ȫ���Բ��ã������е��麯��������������Ȼ���麯����
	{
		return l*w;
	}
};

void fun(Point &p)
{
	cout << p.area() << endl;// ������Point::area()����Ĵ�����
}

int main()
{
	Rect rec(2,4,10,6);
	fun(rec);
}
#endif