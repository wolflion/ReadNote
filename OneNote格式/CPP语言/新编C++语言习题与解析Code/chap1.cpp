#include <iomanip>
#include <iostream>
using namespace std;;

/*���±�C++����ϰ���������chap1 C++���Ը��� */

//��1.68 �����꣬�£���ӡ��������µ�����
void fun168()
{
	int year,mon,days,leap;
	cout << "�� �£�";
	cin >> year >> mon;
	switch(mon)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	case 2:  // �ж��ǲ�������
		if(year%400 == 0) 
			leap = 1;
		else if(year%4 == 0 && year%100 != 0)
			leap = 1;
		else
			leap = 0;
		if(leap)
			days = 29;
		else
			days = 28;
	}
	cout << year << "��" << mon << "�µ�����Ϊ:" << days << endl;
}

//��1.69 �Ӽ�������һ��ż���������ż��д�ɵ���������֮��

int main()
{
	fun168();
	system("pause");
}