#include <iostream>
#include <math.h>
using namespace std;


/* 分析输出结果*/
# if 0

class TPoint
{
	double x,y;
public:
	TPoint(double a, double b)  //构造函数的几种写法？
	{
		x = a;
		y = b;
		cout << "点:("<<x<<","<<y<<")"<<endl;
	}
	friend double distance(TPoint &a, TPoint &b)//非friend时？
	{
		return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	}
};

void main()
{
	TPoint p1(2,2),p2(5,5);
	cout << "两点之间的距离:" << distance(p1,p2) <<endl; 
}

# endif

/* 友元类 */
#if 0
class A
{
	int x;
public:
	A()
	{
		x = 5;
	}
	friend class B;
};

class B
{
public:
	void disp1(A tmp){tmp.x++; cout<<"disp1:x="<<tmp.x<<endl;}
	void disp2(A tmp){tmp.x--; cout<<"disp2:x="<<tmp.x<<endl;}
};

int main()
{
	A obj1;
	B obj2;
	//obj1.disp1(obj1);
	obj2.disp1(obj1);
	obj2.disp2(obj1);
	system("pause");
	return 0;
}
#endif

/*例4.17 编写一个程序，声明复数的类Complex，使用友元函数add实现复数加法*/
//#if 0
class Complex
{
private:
	double real,image;
public:
	Complex(){}
	Complex(double a, double b) // 带参构造函数
	{
		real = a;
		image = b;
	}

	void setdata(double a, double b)
	{
		real = a;
		image = b;
	}

	double getReal()
	{
		return real;
	}

	double getImage()
	{
		return image;
	}

	void print()
	{
		if(image > 0)
			cout << real << "+" << image << "i" <<endl;
		if(image < 0)
			cout << real << "+" << -image << "i" <<endl;
	}
	friend Complex add(Complex,Complex); //声明友元函数
};
//#endif
