#include <iomanip>
#include <iostream>
using namespace std;;

/*《新编C++语言习题与解析》chap1 C++语言概述 */

//例1.68 输入年，月，打印出该年该月的天数
void fun168()
{
	int year,mon,days,leap;
	cout << "年 月：";
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
	case 2:  // 判断是不是闰年
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
	cout << year << "年" << mon << "月的天数为:" << days << endl;
}

//例1.69 从键盘输入一个偶数，输出该偶数写成的两个素数之和  【没有理解好】
void fun169()
{
	int a,b,c,d;
	cout << "a=";
	cin >> a;
	//若一个正整数n不能被2-根号n中任何整数整除，刚n为素数。

	if(a <= 0 || a%2 != 0)
		cout << "输入一个正偶数！" << endl;
	else
		for(b = 3; b <= a/2;b += 2)  //在3到a/2之间，找到一个素数b
		{
			for (c = 2; c <= sqrt((double)b); c++)   // error C2668: “sqrt”: 对重载函数的调用不明确，加一个(double)进行一下强转
			{
				if(b%c == 0)
					break;
			}
			if(c > sqrt((double)b))
				d = a - b; //找到一个素数b
			else
				break;     //b不是素数
			for(c = 2; c <= sqrt((double)d); c++)
				if(d%c == 0)
					break;
			if(c>sqrt((double)d))
				cout << b << "+" << d << "=" << a << endl;
		}
}

//例1.70 水仙花数，一个三位数，其各位数字的立方和恰好等于该数本身，输入153
void fun170()
{
	int i,a,b,c;
	for(i = 100;i <= 999; i++)
	{
		a = i / 100; // 百位数
		b = i/10 - a*10; // 十位数
		c = i - b*10 - a*100; // 个位数

		if(i == a*a*a + b*b*b + c*c*c)
			cout << a << b << c << endl;
	}
}

//例1.73 将用户输入的一个十进制数转换成二，八，十六，三十二进制  【没有理解好】
void trans(int n,int base)
{
	int num[20],i=0,j,m=n; // 将最终进制数的各位放在数组num中
	do 
	{
		i++;   // i为最终进制数的位数
		num[i] = m%base;
		m = m/base;
	} while (m!=0);
	cout << "**" << n << "转换成" << base << "进制的结果为：";

	for(j=i;j>=1;j--) // 输出指定进制数的各位
		if(num[j]<10)
			cout << num[j]; // 不超过10的位直接输出
		else
			cout << char(num[j] +  'A' - 10); // 超过10的位转换为字符输出
	cout << endl;
}

void fun173()
{
	int n,sel;
	cout << "输入一个整数：";
	cin >> n;
	do 
	{
		cout << "输出进制：2,8,16,32（输入0时退出）：";
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
			cout << "进制输入错误！" << endl;
		}
	} while (sel != 0);
}


// 例1.74 执行含通配符'?'的字符串的匹配，该通配符可以与任一字符匹配成功。
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
		cout << "子串起始位置："<< same << endl;
	else
		cout << "匹配不成功" << endl;
}


//例1.75 将用科学计数法输入的一个数值字符串转换为对应的实数。将"1.345e-2转换成0.01345"
#define  MAXLEN 100
double atoe(char *s) // 返回数值串s转换成的数值
{
	double val,power;
	int sign = 0, e, i;
	char c;
	for(; *s == ' '|| *s == '\n'|| *s == '\t'; s++) // 跳过空格
		sign = 1;
	if(*s=='+' || *s=='-')  // 数的符号处理
		sign = (*s++ == '+') ? 1 : -1;
	for (val = 0;*s>='0' && *s <= '9';s++) // 数字字符转换
	{
		val = val * 10 + (*s - '0');
	}
	if(*s == '.')  // 考虑小数部分
	{
		s++;
		for (power = 1; *s >= '0'&&*s <= '9'; s++)
		{
			val = val*10 + *s - '0';
			power *= 10;
		}
		val = val/power;
	}
	if(*s=='e' || *s=='E')  // 考虑指数部分
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
	printf("输入一个数:");
	gets(s);    // 获取一个用科学计数法输入的字符串  
	//gets_s(s);  // error C2660: “gets_s”: 函数不接受 1 个参数
	printf("对应的数:%lf\n\n",atoe(s));
}


int main()
{
	fun168();
	system("pause");
}