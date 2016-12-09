class Point
{
	int x;
	int y;

public:
	Point()
	{
		x = 0;
		y = 0;
	}

	Point(int xx,int yy)
	{
		x = xx;
		y = yy;
	};

	~Point()
	{
		cout << "END" << endl;
	}

	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	void setX(int newX)
	{
		x = newX;
	}
	void setY(int newY)
	{
		y = newY;
	}
};

void fun2401()
{
	Point *point1 = new Point;       // 调用默认构造函数来初始化
	Point *point2 = new Point(3,5);  // 调用重载构造默认构造函数来初始化

	cout << point1->getX() << endl;
	cout << point2->getX() << endl;

	// Point *pt = new Point[100];  // 在堆上创建一个含有100个对象的数组，并把返回的指针赋值给了指针变量pt.
	// delete pt;  // 把数组中的第1个对象释放了，
	// delete []pt; // 空的方括号告诉编译器产生从数组创建时存放的地方取回数组中对象数量的代码,并为数组的所有对象调用析构函数.
}