/*
 * chap2 C++���Ի���
 */
#include <iostream>
#include <string>
using namespace std;

/*
 * 2-6���������򣬴�С������ʾ������Ԫ�ص�ֵ��
 */
const MAXSIZE = 20;
void sort(int list[], int size)
{
	int x;
	for (int y=0;y<size-1;y++) // ���ѭ����list[0]
	{ 
		for (x =y+1;x<size;x++)  // �ڲ�ѭ����list[1]
		{
			if(list[y] > lis[x])
			{
				int temp = list[x];
				list[x] = list[y];
				list[y] = temp;
			}
		}
	}
}
void testBubble()
{
	static int list[MAXSIZE];
	int size = 0;
	do 
	{
		cout << "Type number <-999 to exit>: ";
		cin >> list[size];
	} while (list[size++] != -999);
	sort(list,size-1);
	cout << "After sorting ... \n";
	for(int dex = 0;dex <size-1;dex++)
	{
		cout << setw(5) << list[dex];
	}
}

/*
 * 2-8������һ��ö�����ͣ���������ö�ٱ����������ö�ٱ����Ĳ�����
 */
void testEnum()
{
	enum color{
		RED = 1;
		GREEN = 6;
		BLUE = 9;
	};
	enum color v1=RED,v2;
	cout << "RED=" << RED << endl;
	cout << "v1=" << v1 << endl;
	v2 = GREEN;
	cout << "(v1<v2)=" << (v1 < v2) << endl;
}

/*
 * 2-9������������
 */
inline double dmax(double v1, double v2) // ֻ�н϶��Ҽ򵥵ĺ����Ŷ���Ϊ��������
{
	double ret;
	ret = (v1>v2)?v1:v2;
	return ret;
}

void testInline()
{
	double v1 = 1.23456,v2=2.34567,v;
	v = dmax(v1,v2);
	cout << "max("<<v1<<","<<v2<<")="<<v<<endl;
}

/*
 * 2-14����new���Զ�����float,long,char�������洢���������ǵ��׵�ַ�ֱ𸳸�ָ��fnum,lnum,cnum��Ϊ�丳ֵ������ʾ������
 */
void testNewBasic()
{
	float *fnum;
	long *lnum;
	char *cnum;
	fnum = new float;
	lnum = new long;
	cnum = new char;
	if(!fnum || !lnum || cnum)
	{
		cout << "Allocation error.";
		return 1;
	}
	*fnum = 56.123;
	*lnum = 340000;
	*cnum = 'K';
	cout << *fnum <<''<<*lnum << ''<<*cnum;
	cout << '\n';
	delete fnum;
	delete lnum;
	delete cnum;
	//return 0;
}

/*
 * 2-15������һ��Phone�࣬��new�Զ�Ϊphone��Ķ�������ڴ棬�������ֺ͵绰��������ڴ����Ӧ���С�
 */
class Phone
{
	char name[50];
	char tel[15];
public:
	void store(char *n, char *num);
	void print();
};

void Phone::store(char *n, char *num)
{
	strcpy(name,n);
	strcpy(tel,num);
}

void Phone::print()
{
	cout << name << ":" << tel;
	cout << "\n";
}

void testNewPhone()
{
	Phone *p;
	p = new Phone;
	if(!p)
	{
		cout << "Allocation error.\n";
		return 1;
	}
	p->store("Wang Qi Sheng","010 66745678");
	p->print();
	delete p;
	// return 0;
}

/*
 * 2-16����newΪһ���������鶯̬�����ڴ�ռ䣬Ϊ�丳ֵ������ʾ������
 */
void testNewArray()
{
	int *ptr;
	ptr = new int[6];
	if(! ptr)
	{
		cout << "Allocation error.\n";
		return 1;
	}
	int i;
	for (i=0;i<6;i++)
	{
		ptr[i] = i;
	}
	for(i=0;i<6;i++)
	{
		cout << "Here is integer at ptr["<<i<<"]:";
		cout << ptr[i] << "\n";
	}
	delete []ptr;
	// return 0;
}

int main()
{
	void testNewBasic();
	void testNewPhone();
	void testNewArray();
}