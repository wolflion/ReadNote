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
	Point *point1 = new Point;       // ����Ĭ�Ϲ��캯������ʼ��
	Point *point2 = new Point(3,5);  // �������ع���Ĭ�Ϲ��캯������ʼ��

	cout << point1->getX() << endl;
	cout << point2->getX() << endl;

	// Point *pt = new Point[100];  // �ڶ��ϴ���һ������100����������飬���ѷ��ص�ָ�븳ֵ����ָ�����pt.
	// delete pt;  // �������еĵ�1�������ͷ��ˣ�
	// delete []pt; // �յķ����Ÿ��߱��������������鴴��ʱ��ŵĵط�ȡ�������ж��������Ĵ���,��Ϊ��������ж��������������.
}