#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//////输出一个数输出这个数之和，例如输入149 输出1+4+9=14（用递归写）
//////思路：149/10=14 +149%10=9 以此类推
////
////int ssum(int n)
////{
////	int sum = 0;
////	if (n > 9)
////	{
////		sum =ssum( n / 10) + n % 10;
////		return sum;
////
////
////	}
////	else
////	{
////		return n;
////	}
////
////
////
////
////}
////  
////int main()
////{
////
////	int n = 0;
////	scanf("%d", &n);
////	int sum = ssum(n);
////	printf("%d",sum);
////
////
////
////
////	return 0;
////}
////编写一个函数实现n的k次方（用递归）
//int cifang(int k,int n)
//{
//	int sum = 1;
//	if (k == 0)
//	{
//		return 1;
//
//	}
//       if (k>0)
//		sum = n*cifang(k-1,n);
//		
//		return sum;
//
//}
//
//
//
//int main()
//{
//	int k = 0;
//	int n = 0;
//	scanf("%d %d", &k,&n);
//	int sum=cifang(k,n);
//	printf("%d",sum);
//
//
//	return 0;
//}

//// 数组
//
//int main() 
//{
//int arr[10] = {1,2,3,4,5,6};
//int* p = arr;
//int i = 0;
//for (i = 0; i < 6; i++)
//{
//	printf("%d", *p);
//	p++;
//
//
//}
//}

int main()
{
	int arr[4][4] = { {1,2},{2,3},{4,5,5},{2,1} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 4; i++)//打印行
	{
		for (j = 0; j < 4; j++)//打印列
		{
			printf("%p ",&arr[i][j]);//%p表示打印地址

		}
		printf("\n");


	}
	return 0;

}