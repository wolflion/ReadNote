/*
 * chap2 C++语言基础
 */
#include <iostream>
#include <string>
using namespace std;

/*
 * 2-6：气泡排序，从小到大显示出数组元素的值。
 */
const MAXSIZE = 20;
void sort(int list[], int size)
{
	int x;
	for (int y=0;y<size-1;y++) // 外层循环由list[0]
	{ 
		for (x =y+1;x<size;x++)  // 内层循环的list[1]
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
 * 2-8：声明一个枚举类型，定义两个枚举变量，考查对枚举变量的操作。
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
 * 2-9：内联函数。
 */
inline double dmax(double v1, double v2) // 只有较短且简单的函数才定义为内联函数
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
 * 2-14：用new来自动分配float,long,char型三个存储区，将它们的首地址分别赋给指针fnum,lnum,cnum，为其赋值，并显示出来。
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
 * 2-15：建立一个Phone类，用new自动为phone类的对象分配内存，将将名字和电话号码放入内存的相应域中。
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
 * 2-16：用new为一个整型数组动态分配内存空间，为其赋值，并显示出来。
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