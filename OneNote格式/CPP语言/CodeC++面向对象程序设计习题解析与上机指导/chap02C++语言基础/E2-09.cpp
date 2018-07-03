//2-9试编写一个求两个双精度浮点数中最大值的函数，要求将该函数定义为内联函数。
#include <iostream>
using namespace std;

inline double max(double v1, double v2)
{
	double ret;
	ret = (v1>v2)?v1:v2;
	return ret;
}

int main()
{
	double v1=1.23456,v2=2.34567,v;
	v = max(v1,v2);
	cout << "max("<<v1<<","<<v2<<")="<<v<<endl;
	return 0;
}

/*
（1）max()定义为内联函数，其调用语句同普通函数一样。
（2）内联函数可以提高程序的执行效率，但是当内联函数为较长的复杂函数，且调用频繁时，程序将加长很多，反而会影响执行效率。
*/