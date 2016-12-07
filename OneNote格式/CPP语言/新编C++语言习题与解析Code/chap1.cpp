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

//��1.69 �Ӽ�������һ��ż���������ż��д�ɵ���������֮��  ��û�����á�
void fun169()
{
	int a,b,c,d;
	cout << "a=";
	cin >> a;
	//��һ��������n���ܱ�2-����n���κ�������������nΪ������

	if(a <= 0 || a%2 != 0)
		cout << "����һ����ż����" << endl;
	else
		for(b = 3; b <= a/2;b += 2)  //��3��a/2֮�䣬�ҵ�һ������b
		{
			for (c = 2; c <= sqrt((double)b); c++)   // error C2668: ��sqrt��: �����غ����ĵ��ò���ȷ����һ��(double)����һ��ǿת
			{
				if(b%c == 0)
					break;
			}
			if(c > sqrt((double)b))
				d = a - b; //�ҵ�һ������b
			else
				break;     //b��������
			for(c = 2; c <= sqrt((double)d); c++)
				if(d%c == 0)
					break;
			if(c>sqrt((double)d))
				cout << b << "+" << d << "=" << a << endl;
		}
}

//��1.70 ˮ�ɻ�����һ����λ�������λ���ֵ�������ǡ�õ��ڸ�����������153
void fun170()
{
	int i,a,b,c;
	for(i = 100;i <= 999; i++)
	{
		a = i / 100; // ��λ��
		b = i/10 - a*10; // ʮλ��
		c = i - b*10 - a*100; // ��λ��

		if(i == a*a*a + b*b*b + c*c*c)
			cout << a << b << c << endl;
	}
}

//��1.73 ���û������һ��ʮ������ת���ɶ����ˣ�ʮ������ʮ������  ��û�����á�
void trans(int n,int base)
{
	int num[20],i=0,j,m=n; // �����ս������ĸ�λ��������num��
	do 
	{
		i++;   // iΪ���ս�������λ��
		num[i] = m%base;
		m = m/base;
	} while (m!=0);
	cout << "**" << n << "ת����" << base << "���ƵĽ��Ϊ��";

	for(j=i;j>=1;j--) // ���ָ���������ĸ�λ
		if(num[j]<10)
			cout << num[j]; // ������10��λֱ�����
		else
			cout << char(num[j] +  'A' - 10); // ����10��λת��Ϊ�ַ����
	cout << endl;
}

void fun173()
{
	int n,sel;
	cout << "����һ��������";
	cin >> n;
	do 
	{
		cout << "������ƣ�2,8,16,32������0ʱ�˳�����";
		cin >> sel;
		switch(sel)
		{
		case 2:
			trans(n,2);
			break;
		case 8:
			trans(n,8);
			break;
		case 16:
			trans(n,16);
			break;
		case 32:
			trans(n,32);
			break;
		case 0:
			break;
		default:
			cout << "�����������" << endl;
		}
	} while (sel != 0);
}


// ��1.74 ִ�к�ͨ���'?'���ַ�����ƥ�䣬��ͨ�����������һ�ַ�ƥ��ɹ���
int pattern_index(char substr[], char str[])
{
	int i,j,k;
	for(i=0;str[i];i++)
		for (j=i,k=0;(str[j]==substr[k]) || (substr[k]=='?');j++,k++)
		{
			if(!substr[k+1])
				return(i);
		}
		return (0);
}

void fun174()
{
	char *substring,*string;
	int same;
	substring = "???gram";
	string = "this program return index of substring";
	same = pattern_index(substring,string);
	if(same)
		cout << "�Ӵ���ʼλ�ã�"<< same << endl;
	else
		cout << "ƥ�䲻�ɹ�" << endl;
}


//��1.75 ���ÿ�ѧ�����������һ����ֵ�ַ���ת��Ϊ��Ӧ��ʵ������"1.345e-2ת����0.01345"
#define  MAXLEN 100
double atoe(char *s) // ������ֵ��sת���ɵ���ֵ
{
	double val,power;
	int sign = 0, e, i;
	char c;
	for(; *s == ' '|| *s == '\n'|| *s == '\t'; s++) // �����ո�
		sign = 1;
	if(*s=='+' || *s=='-')  // ���ķ��Ŵ���
		sign = (*s++ == '+') ? 1 : -1;
	for (val = 0;*s>='0' && *s <= '9';s++) // �����ַ�ת��
	{
		val = val * 10 + (*s - '0');
	}
	if(*s == '.')  // ����С������
	{
		s++;
		for (power = 1; *s >= '0'&&*s <= '9'; s++)
		{
			val = val*10 + *s - '0';
			power *= 10;
		}
		val = val/power;
	}
	if(*s=='e' || *s=='E')  // ����ָ������
	{
		s++;
		if(*s=='+' || *s=='-')
			c = *s++;
		else
			c = '+';
		for(e=0;*s>='0'&&*s<='9';s++)
			e = e*10 + (*s-'0');
		if (c=='+')
		{
			for (i=e;i>0;i--)
			{
				val *= 10;
			}
		}
		else
		{
			for(i=e;i>0;i--)
				val /= 10;
		}
	}
	return (val * sign);
}

void fun175()
{
	char *s;
	s = (char *)malloc(MAXLEN);
	printf("����һ����:");
	gets(s);    // ��ȡһ���ÿ�ѧ������������ַ���  
	//gets_s(s);  // error C2660: ��gets_s��: ���������� 1 ������
	printf("��Ӧ����:%lf\n\n",atoe(s));
}


int main()
{
	fun168();
	system("pause");
}