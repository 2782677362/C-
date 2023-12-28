#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//
//	/*int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p + i));
//	}*/
//	
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	
//	return 0;
//}

//print1(int arr[3][5], int hang, int lie)
//{
//	int i = 0;
//	for (i = 0; i < hang; i++)
//	{
//		int j = 0;
//		for (j = 0; j < lie; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//print2(int (*p)[5], int hang, int lie)
//{
//	int i = 0;
//	for (i = 0; i < hang; i++)
//	{
//		int j = 0;
//		for (j = 0; j < lie; j++)
//		{
//			//printf("%d ", *(*(p + i)+j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,3,5,7,9,2,4,6,8,10,3,5,7,9,11 };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	int* p1 = arr;
//	int(*p2)[5] = &arr;
//	printf("%d ", *(p1 + 1));
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0,11,22,33,44 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[1]);
//	printf("%p\n", &arr[2]);
//	printf("%p\n", &arr[3]);
//	printf("%p\n", &arr[4]);
//	printf("%p\n", arr + 1);
//	printf("%d\n", *arr+1);
//	printf("%p\n", &arr + 1);
//	printf("%d\n", *(arr+1));
//	return 0;
//}