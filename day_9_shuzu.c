#include<stdio.h>
//int main()
//{
//	int arr[][4] = { {2,3},{1,5},{3,8} };//不能省略列，因为要知道第二行从哪里开始，只要列确定了就能随便放
//	int* p = &arr[0][0];//*p每次只访问一个整型，每次一个地址
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//
//
//	return 0;
//}




//对比取地址的方法
int main()
{
	int arr[][4] = { {2,3},{1,5},{3,8} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)

	{
		for (j = 0; j < 4; j++)
		{
			printf("%d", arr[i][j]);



		}
		printf("\n");
	
	}
	return 0;
}
//今天写作业，所以没写代码
