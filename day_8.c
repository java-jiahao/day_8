#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//////���һ������������֮�ͣ���������149 ���1+4+9=14���õݹ�д��
//////˼·��149/10=14 +149%10=9 �Դ�����
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
////��дһ������ʵ��n��k�η����õݹ飩
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

//// ����
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
	for (i = 0; i < 4; i++)//��ӡ��
	{
		for (j = 0; j < 4; j++)//��ӡ��
		{
			printf("%p ",&arr[i][j]);//%p��ʾ��ӡ��ַ

		}
		printf("\n");


	}
	return 0;

}