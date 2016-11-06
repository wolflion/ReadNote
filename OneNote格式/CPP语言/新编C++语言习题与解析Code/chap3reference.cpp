#include <iostream>
using namespace std;

class Sample
{
	int n;
public:
	Sample(int i)
	{
		n = i;
	}
int getn() const   // 如果没写const 或写在这样int const getn()
	{
		return n;
	}
};

int add(const Sample &s1, const Sample &s2)
{
	int sum = s1.getn()+s2.getn();//编辑时就提示Error 对象包含与成员函数不兼容的类型限制符
	return sum;
}

int main()
{
	Sample s1(100),s2(200);
	cout << "sum=" << add(s1,s2) << endl;
	system("pause");
	return 0;
}
