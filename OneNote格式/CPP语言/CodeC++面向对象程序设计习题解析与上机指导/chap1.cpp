/*
* C++�������������ϰ��������ϻ�ָ��
* Chap1 C++���Ի���
*/

//2-1 ���룺һ���� ����������г�10��������2�η������η�
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
 * ����˼����
 * 1. �Ƿ���long���͸��ã�-2147483648��2147483647��
 * 2. cout<<long(i)*i*i; �� cout<<long(i*i*i)��ʲô����
 * 3. ���η������η���Ӧ����ѧ������double pow(double x,double y);��
 * 4. cout << " ";�����÷�����Ҫ��
 */

//2-2�û�����һ�������������Ľ׳�
int fun202()
{
	int n;
	unsigned long factor = 1; // unsigned long ���ֻ����0��4294967295��������ൽ12!
	cout << "Enter a number: \n";
	cin >> n;
	for(int i = n; i > 1; i--)
	{
		factor = factor * i;
	}
	cout << n << "!=" << factor << endl;
	return 0;
}
 
 //2-3 �û�����һ����n�������n��fibonacci��
 
 //2-13 ����ͬ����ȫ�ֱ����;ֲ��������������Ǹ��Ե�������
int var;

void fun213()
{
	int var = 2;
	::var = 3;  //�ھֲ���������������ʹ��ͬ����ȫ�ֱ����������ڱ���ǰ����"::"�����������
	if(var > 1)
	{
		int var = 5;
		cout << var << endl;  // var = 5;
	} 
	cout << var << endl;  // var = 2;
	cout << ::var << endl; // var = 3;
}
 
 //2-14 ʹ��new���Զ�����float��,long��,char�������洢���������ǵ��׵�ַ�ֱ𸳸�ָ��fnum,lnum��cnum������Щ�洢�ռ丳ֵ������ʾ���ǵ�ֵ�������delete�ͷ����ж�̬������ڴ�
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
 
//2-17 ����һ����̬�������飬��newΪ�����ռ�͸�ֵ������ʾ���� 
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

//2-18 ��дround()�����ڶԸ����������������롣�����������ֵͨ�����ò������д���
void round(double& num)
{
	double fac;
	double val;
	fac = modf(num, &val); // modf()���ڽ�һ�����ֽ�Ϊ����������С������
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