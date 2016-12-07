/*
* C++面向对象程序设计习题解析与上机指导
* Chap1 C++语言基础
*/

//2-1 输入：一个数 输出：依次列出10个数及其2次方，三次方
int fun201()
{
	int iInputNum;
	const int iNum = 10; 
	cin >> iInputNum;

	for (int i=0;i < iNum; i++)
	{
		// cout << iInputNum+i << " " << (iInputNum+i)*(iInputNum+i) << " " << (iInputNum+i)*(iInputNum+i)*(iInputNum+i) << endl;
		cout << iInputNum+i << " " << (int)(pow((double)(iInputNum+i),2)) << " " << (int)(pow((double)(iInputNum+i),3)) << endl;
	}
	
	return 0;
}

/*
 * 进阶思考：
 * 1. 是否用long类型更好，-2147483648到2147483647？
 * 2. cout<<long(i)*i*i; 与 cout<<long(i*i*i)有什么区别？
 * 3. 二次方和三次方对应的数学函数是double pow(double x,double y);。
 * 4. cout << " ";这种用法很重要。
 */

//2-2用户输入一个数，计算该算的阶乘
int fun202()
{
	int n;
	unsigned long factor = 1; // unsigned long 最多只能是0到4294967295，所以最多到12!
	cout << "Enter a number: \n";
	cin >> n;
	for(int i = n; i > 1; i--)
	{
		factor = factor * i;
	}
	cout << n << "!=" << factor << endl;
	return 0;
}
 
 //2-3 用户输入一个数n，计算第n个fibonacci数
 
 //2-13 声明同名的全局变量和局部变量并测试它们各自的作用域
int var;

void fun213()
{
	int var = 2;
	::var = 3;  //在局部变量的作用域内使用同名的全局变量，可以在变量前加上"::"作用域运算符
	if(var > 1)
	{
		int var = 5;
		cout << var << endl;  // var = 5;
	} 
	cout << var << endl;  // var = 2;
	cout << ::var << endl; // var = 3;
}
 
 //2-14 使用new来自动分配float型,long型,char型三个存储区，将它们的首地址分别赋给指针fnum,lnum和cnum，给这些存储空间赋值，并显示它们的值。最后用delete释放所有动态分配的内存
int fun214()
{
	float* fnum;
	long* lnum;
	char* cnum;
	fnum = new float;
	lnum = new long;
	cnum = new char;
	if(!fnum || !lnum || !cnum)
	{
		cout << "Allocation error.\n";
		return 1;
	}
	*fnum = 56.123;
	*lnum = 34000;
	*cnum = 'K';
	cout << *fnum << ' '<< *lnum << ' ' << *cnum;
	cout << '\n';
	delete fnum;
	delete lnum;
	delete cnum;
	return 0;
}
 
//2-17 建立一个动态对象数组，用new为其分配空间和赋值，并显示出来 
class examp
{
	int i,j;
public:
	void init(int a, int b)
	{
		i = a;
		j = b;
	}
	int product()
	{
		return i*j;
	}
};

int fun217()
{
	examp *ptr;
	int i;
	ptr = new examp[6];
	if(!ptr)
	{
		cout << "Allocation error.\n";
		return 1;
	}
	for(i=0;i<6;i++)
	{
		ptr[i].init(i,i);
	}
	for(i=0;i<6;i++)
	{
		cout << "Product["<<i<<"]is:";
		cout << ptr[i].product()<<"\n";
	}
	delete []ptr;
	return 0;
}

//2-18 编写round()，用于对浮点数进行四舍五入。被四舍五入的值通过引用参数进行传递
void round(double& num)
{
	double fac;
	double val;
	fac = modf(num, &val); // modf()用于将一个数分解为整数部分与小数部分
	if (fac < 0.5)
	{
		num = val;
	}
	else
	{
		num = val + 1.0;
	}
}

int fun218()
{
	double d = 245.4;
	cout<<d<<"rounded is";
	round(d);
	cout<<d<<"\n";
	d = 56.9;
	cout<<d<<"rounded is";
	round(d);
	cout<<d<<"\n";
	return 0;
}