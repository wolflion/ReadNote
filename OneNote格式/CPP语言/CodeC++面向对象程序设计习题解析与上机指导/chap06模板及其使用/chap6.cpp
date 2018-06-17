/*
 * chap6 ģ�弰��ʹ��
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

 
/*6-1
 * min()����ģ�壬���ܸ������͵������������ҳ�������������С�ߡ�
 */
#if 0
template <class T>  // ���Ͳ���T�� ģ����������
T min(T arg1, T arg2, T arg3) // ������������
{
	T v;  // ��������
	if((arg1 < arg2) && (arg1 < arg3))
	{
		v = arg1;
	}
	else if((arg2 < arg1) && (arg2 < arg3))
	{
		v = arg2;
	}
	else
		v = arg3;
	return v;
}

void testmin()
{
	cout << min(100,200,300) << endl;
}
#endif

/*6-2
 * find()Ϊģ�庯����������������һ��ָ����Ԫ�ء�
 */
#if 0
template <class T>
int find(T ob,T *list,int size)
{
	int i;
	for(i=0;i<size,i++)
	{
		if(ob == list[i])
			return i;
	}
	return -1
}

void testfind()
{
	int a[] = {1,2,3,4,5,6,7,8};
	cout << find(6,a,8) << endl;
}
#endif

/*6-3
 * ��ģ����ʹ�ö������Ͳ���
 */
#if 0
template <class Type1,class Type2>
class Myclass
{
	Type1 i;
	Type2 j;
public:
	Myclass(Type1 a, Type2 b)
	{
		i = a;
		j = b;
	}
	void show()
	{
		cout << i << ' ' << j << '\n' ;
	}
};

void testMyclass()
{
	Myclass<int,double> ob1(10,0.23);
	ob1.show();
}
#endif

/*6-4
 *
 */

/*6-5
 *
 */
template <class data_t>
class list
{
	data_t  data;
	list *next;
public:
	list(data_t d);
	void add(list *node)
	{
		node->next = this;
		next = 0;
	}
	list *getnext()
	{
		return next;
	}
	data_t getdata()
	{
		return data;
	}
};

template <class data_t>
list<data_t>::list(data_t d)
{
	data = d;
	next = 0;
}

void testlist()
{
	list<char> start('a');
	list<char> *p, *last;
	int i;
	// ��������
	last = &start;
	for (i=1;i<26;i++)
	{
		p = new list<char>('a'+i);
		p->add(last);
		last = p;
	}
	// ��ʾ����
	p = &start;
	while(p)
	{
		cout << p->getdata();
		p = p->getnext();
	}
	return 0;
}

/*6-6
 *
 */

int main()
{
	testmin();
	testfind();
	testMyclass();
	testlist();
	return 0;
}
