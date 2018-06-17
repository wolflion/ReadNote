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