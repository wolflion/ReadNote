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