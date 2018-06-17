/*
 * 3-13：time_data，带参数的构造函数。
 */

 #include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
using namespace std;
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