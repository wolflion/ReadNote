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