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
