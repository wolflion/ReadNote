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
int getn() const   // ���ûдconst ��д������int const getn()
	{
		return n;
	}
};

int add(const Sample &s1, const Sample &s2)
{
	int sum = s1.getn()+s2.getn();//�༭ʱ����ʾError ����������Ա���������ݵ��������Ʒ�
	return sum;
}

int main()
{
	Sample s1(100),s2(200);
	cout << "sum=" << add(s1,s2) << endl;
	system("pause");
	return 0;
}
