/*
* 分析以下程序的运行结果。
*/

#include <iostream>
using namespace std;

ostream & sethex(ostream & stream)
{
	stream.setf(ios::hex|ios::uppercase|ios::showbase);
	return stream;
}

ostream & reset(ostream & stream)
{
	stream.unsetf(ios::hex|ios::uppercase|ios::showbase);
	return stream;
}

int main()
{
	cout << sethex << 200 << '\n';
	cout << reset << 200 << '\n';
	return 0;
}