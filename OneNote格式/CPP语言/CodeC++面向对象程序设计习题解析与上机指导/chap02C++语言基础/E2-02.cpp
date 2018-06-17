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