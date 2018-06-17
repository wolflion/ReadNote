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