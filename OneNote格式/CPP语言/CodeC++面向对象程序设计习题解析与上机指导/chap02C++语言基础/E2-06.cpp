/*
 * 2-6：气泡排序，从小到大显示出数组元素的值。
 */
const MAXSIZE = 20;
void sort(int list[], int size)
{
	int x;
	for (int y=0;y<size-1;y++) // 外层循环由list[0]
	{ 
		for (x =y+1;x<size;x++)  // 内层循环的list[1]
		{
			if(list[y] > lis[x])
			{
				int temp = list[x];
				list[x] = list[y];
				list[y] = temp;
			}
		}
	}
}
void testBubble()
{
	static int list[MAXSIZE];
	int size = 0;
	do 
	{
		cout << "Type number <-999 to exit>: ";
		cin >> list[size];
	} while (list[size++] != -999);
	sort(list,size-1);
	cout << "After sorting ... \n";
	for(int dex = 0;dex <size-1;dex++)
	{
		cout << setw(5) << list[dex];
	}
}