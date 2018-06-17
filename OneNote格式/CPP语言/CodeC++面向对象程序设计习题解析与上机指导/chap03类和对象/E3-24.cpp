/*
 * 3-24：类cube，num初始化为1-10，将cub初化为num的三次方值。
 */
class cube
{
	int num,cub;
public:
	cub(int a ,int b)
	{
		num = a; 
		cub = b;
	}
	void show()
	{
		cout << num << ' ' << cub << endl;
	}
};

void testcube()
{
	cube ob[10] = {
		cube(1,1),
		cube(2,8),
		cube(3,27),
		cube(4,64),
		cube(5,125),
		cube(6,216),
		cube(7,343),
		cube(8,512),
		cube(9,729),
		cube(10,1000)
	};
	int i;
	for (i = 0; i < 10; i++)
	{
		ob[i].show();
	}
	// return 0;
}
