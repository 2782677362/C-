#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void menu()
//{
//	printf("****************\n");
//	printf("*****1.Add *****\n");
//	printf("*****2.Sub *****\n");
//	printf("*****3.Mul *****\n");
//	printf("*****4.Div *****\n");
//	printf("*****0.exit*****\n");
//	printf("****************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数->\n");
//	scanf("%d %d", &x, &y);
//	int ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误\n");
//		}
//	}
//	while (input);
//	return 0;
//}




//void menu()
//{
//	printf("****************\n");
//	printf("*****1.Add *****\n");
//	printf("*****2.Sub *****\n");
//	printf("*****3.Mul *****\n");
//	printf("*****4.Div *****\n");
//	printf("*****0.exit*****\n");
//	printf("****************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		int (*prArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			printf("请输入两个操作数->\n");
//			scanf("%d %d", &x, &y);
//			int ret = prArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int (*p)[5] = &arr;
//	int (*prArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	int (*(*pprArr)[5])(int, int) = &prArr;
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	for (int j = sz; j > 1; j--) 
//	{
//		int flag = 1;
//		for (i = 0; i < j - 1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}

#include <stdlib.h>

//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1) - (*(int*)e2);
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	float a = 0.75;
//	float b = 0.5;
//	void* pa = &a;
//	void* pb = &b;
//	printf("%d\n", (*(int*)pa) - (*(int*)pb));
//	printf("%d\n", (*(int*)pb) - (*(int*)pa));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i, j;
//    scanf("%d %d", &i, &j);
//    for (int n = 0; n <= i; n++)
//    {
//        if (n % j != 0)
//            printf("%d\n", n);
//
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    scanf("%d %d", &i, &j);
//    printf("%d\n", (i + j) % 8 + 1);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int x = 0;
//    int n = 0;
//    scanf("%d %d", &x, &n);
//   /* int day = x + n;
//    while (day > 7)
//    {
//        day -= 7;
//    }*/
//
//    int day = x + n % 7;
//    if (day > 7)
//    {
//        day -= 7;
//    }
//    printf("%d\n", day);
//
//    return 0;
//}