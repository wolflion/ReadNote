/*chap10 Ԥ������*/
//90-1 ��ʹ�ú궨����ʽʱ����ʹ���걸������  
#if 0
#define SQUARE(x) x*x
// #define SQUARE(x) ((x)*(x))
#define DOUBLE(y) (y)+(y)
// #define DOUBLE(y) ((y)*(y))

int main(void)
{
	int x = 8;
	int y = 4;
	printf("%d\n",SQUARE(x)); //8*8=64
	printf("%d\n",SQUARE(x+2)); //8+2*8+2=26
	printf("%d\n",DOUBLE(x+1)); // (4+1)+(4+1)=10
	printf("%d\n",10*DOUBLE(x+1)); // 10*(4+1)+(4+1)=55
	system("pause");
	return 0;
}
#endif

//90-2 ����������ĸ�����  (���뻹�д�)
#define SQUARE(x) ((x)*(x))

#define MIN(type, x,y)\    
{\
	type _x = (x);\
	type _y = (y);\
	_x < _y ? _x:_y;\
} // ��һ��Ҫѧ������д����һ����Ҫѧϰһ�¿��������ȫ����

int fsquare(int x)
{
	return x*x;
}

int main(void)
{
	int x1 = 8;
	int x2 = 8;
	int r1 = 0;
	int r2 = 0;
	r1 = SQUARE(x1++);
	printf("x1 = %d,r1 = %d\n",x1,r1);//10��64   x1=10��ԭ������Ϊx1++��ִ�������Σ�
	r2 = fsquare(x2++);//9,64
	printf("x2 = %d,r2 = %d\n",x2,r2);
	system("pause");
	return 0;
}

//90-3 ����ʹ�ú괴��һ�֡������ԡ�