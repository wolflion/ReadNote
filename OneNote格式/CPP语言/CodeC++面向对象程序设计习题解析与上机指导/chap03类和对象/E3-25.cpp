/*
 * 3-25：通过对象指针来访问对象数组，使程序以相反的顺序显示对象数组的内容。
 */
// class的定义，同example23

 #include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
using namespace std;


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