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