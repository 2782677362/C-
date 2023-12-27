#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//extern int a;
//
////int main()
////{
////	printf("hehe\n");
////	
////	int shuzi1 = 0;
////	int shuzi2 = 0;
////	scanf("%d %d", &shuzi1, &shuzi2);
////	int sum = shuzi1 + shuzi2;
////	printf("%d\n", sum);
////	printf("%d\n", a);
////	printf("abcdef");
////	printf("%s\n" "ad");
////	return 0;
////}
//int main()
////{/*
////	printf("abc\ndef");
////	printf("%c\n",'\130');
////	printf("%s\n","ad");
////	*/
//	return 0;
//}
// 
// 
// 
//int main()
//{
//	int input = 0;
//	printf("你要好好学习吗？0/1\n");
//	
//	scanf("%d" , &input);
//	if (input == 0)
//	{
//		printf("good\n");
//	}
//	else
//	{
//		printf("bad\n");
//	}
//	return 0;
//}



//int Add(t1, t2)
//{
//	int z = t1 + t2;
//	return z;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int num = Add(x, y);
//	printf("%d\n", num);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int A[10] = { 1,2,3,5,7,9,11,15,19,28 };
//	while (i < 10)
//	{
//		printf("%d\n", A[i]);
//		i = i + 1;
//	}
//	return 0;
//}

//int f(int a)
//{
//	if (a < 0)
//	return 1;
//	else
//	if (a == 0)
//	return 0;
//	else
//	return -1;
// }
//
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int y = f(x);
//	printf("%d\n", y);
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	int x = 0;
//	scanf("%d", &x);
//	if (x > 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = 1;
//	printf("%d\n", y);
//	return 0;
//}
//#define ADD(x,y) ((x)+(y))
//#define NUM 100
//int main()
//{
//	printf("%d\n",NUM);
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int num = 375;
//	int a = 10;
//	printf("%p\n", &a);
//	printf("%p\n", &num);
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	if (a == 10)
//		printf("%d\n", a);
//	else
//		printf("hehe\n");
//
//	
//
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//	    printf("%d\n", a);
//		a+=2;
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = {0};
//	printf("请输入密码:");
//	scanf("%s", &password);
//	printf("%s\n",password);
//	
//	int ch = 0;
//	while ((ch=getchar()) != '\n')
//	{
//		int ch = getchar();
//	}
//
//    printf("请确认密码(Y/N):");
//	int ret = getchar();
//	if ('Y' == ret)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	
//	return 0;
//
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 73,32,99,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int x = sizeof(arr) / sizeof(arr[0]);
//	while (i < x)
//	{
//		printf("%c\n", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	scanf("%4d%2d%2d", &y, &m, &d);
//	if ((1990 <= y)&&(y <= 2015) && (1 <= m)&&(m <= 12) && (1 <= d)&&(d <= 30))
//	{
//		printf("%d\n", y);
//		printf("%02d\n", m);
//		printf("%02d\n", d);
//	}
//	return 0;
//}
//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float s = 0.0f;
//	float y = 0.0f;
//	scanf("%d;%f,%f,%f", &id, &c, &s, &y);
//	printf("The each subject score of NO.%d is %.2f, %.2f, %.2f.\n", id, c, s, y);
//
//	return 0;
//}
//int main()
//{
//	int a = printf("Hello world!");
//	printf("\n%d\n", a);
//	return 0;
//}
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("<<\"Hello world!\"<< end!;");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	if (a >= b)
//		b = a;
//	if (c >= d)
//		d = c;
//	if (b >= d)
//		printf("%d\n", b);
//	else
//		printf("%d\n", d);
//	return 0;
//}
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]); 
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		    max = arr[i]; 		
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int max = 0;
//	int i = 0;
//	int n = 0;
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//		{
//			max=n;
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	float r = 0.0f;
//	float v = 0.0f;
//	scanf("%f", &r);
//	v = 4 / 3.0 * 3.1415926 * r * r * r;
//	printf(" %.3f", v);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//		printf("%d ", a);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int n = 0;
//	int sum = 1;
//	int m = 0;
//	for (n = 1; n <= x; n++)
//	{
//		sum = sum * n;
//		m = m + sum;
//	}
//	printf("%d\n", m);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int k = 8;
//	int i = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = i-1;
//	int mid = 0;
//	while(left <= right)
//	{
//		mid = (left + right) / 2;//为防止溢出，可写成 mid = left + (right - left)/2;    不可写成 mid = left/2 + right/2;
//		if (arr[mid] > k)
//			right = mid-1;
//		else if (arr[mid] < k)
//			left = mid+1;
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("没找到");
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	char arr1[] = {"welocome to bit"};
//	char arr2[] = {"###############"};
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main()
//{
//	int left = 1;
//	int right = 100;
//	int a = 0;
//
//	
//	do 
// {
//	    printf("******************\n");
//	    printf("***** 菜  单 *****\n");
//		printf("***** play:1 *****\n");
//		printf("***** exit:0 *****\n");
//		printf("***** 请输入 *****\n");
//		printf("******************\n");
//		
//		scanf("%d" ,&a);
//		if (a == 1)
//		{
//			int i = 0;
//			srand((unsigned)time(NULL));
//			i = rand();
//			i = i % 100 + 1;
//			printf("开始游戏!请开始在1-100中猜\n");
//			while (1)
//			{
//				scanf("%d", &a);
//				if (a > i)
//				{
//					right = a - 1;
//					if (left == right)
//						printf("比%d小哦，就剩%d了，还猜不对吗，呜呜呜\n", a,left);
//					else
//						printf("猜大了，请在%d-%d中继续猜\n", left, right);
//				}
//				else if (a < i)
//				{
//					left = a + 1;
//					if (left == right)
//						printf("比%d大哦，就剩%d了，还猜不对吗，呜呜呜\n", a,left);
//					else
//						printf("猜小了，请在%d-%d中继续猜\n", left, right);
//				}
//				else
//				{
//					printf("\n恭喜您,猜对了!\n\n");
//					left = 1;
//					right = 100;
//					break;
//				}
//			}
//		}
//		else if (a == 0)
//		{
//			printf("结束游戏\n");
//			break;
//		}
//		else
//			printf("输入错误，请重新输入\n");
//	} while (a);
//
//	return 0;
//}


//int FX(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		    left = mid+1;
//	    else if (arr[mid] > k)
//		    right = mid-1;
//	    else
//		    return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = FX(arr, k, sz);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是:%d\n", ret);
//	return 0;
//}


//int FX(int* pi,int* px)
//{
//	*px=*px+1;
//	return *px;
//}
//int main()
//{
//	int i = 0;
//	int x = 0;
//	for (i = 0; i < 20; i++)
//	{
//		int c = FX(&i,&x);
//		printf("%d\n", x);
//	}
//	return 0;
//}
// 
//void FX(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	FX(&num);
//	printf("%d\n", num);	
//	FX(&num);
//	printf("%d\n", num);	
//	FX(&num);
//	printf("%d\n", num);	
//	FX(&num);
//	printf("%d\n", num);	
//	FX(&num);
//	printf("%d\n", num);
//	return 0;
//}

//int FX(n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * FX(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = FX(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int FX(n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return FX(n - 1) + FX(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = FX(n);
//	printf("%d\n", ret);
//	return 0;
//}

//void MAX(int *px, int *py)
//{
//	int i = 0;
//	if (*py > *px)
//	{
//		i = *py;
//		*py = *px;
//		*px = i;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	MAX(&b, &c);
//	MAX(&a, &b);
//    MAX(&b, &c);
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//void MAX(int* px, int* py)
//{
//	int i = 0;
//	if (*py > *px)
//	{
//		i = *py;
//		*py = *px;
//		*px = i;
//	}
//}
//int FX(int a, int b)
//{
//	int n = 0;
//	for(n=b;n>=1;n--)
//	{
//		if (a % n == 0 && b % n == 0)
//			return n;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	MAX(&a, &b);
//	int ret = FX(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//void FX(int arr[], int sz)
//{
//	int n = 0;
//	for (n = 0; n < sz - 1; n++)
//	{
//		int m = 0;
//		for(m=0;m<sz-n-1;m++)
//		{
//			if (arr[m] > arr[m + 1])
//			{
//				int x = arr[m];
//				arr[m] = arr[m+ 1];
//				arr[m+ 1] = x;
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	FX(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void Retrograde(char* arr)
//{
//	int len = strlen(arr);
//    char mid = *arr;
//	*arr = *(arr+len-1);
//	*(arr+len-1) = '\0';
//	if (arr + 1 < arr + len - 1)
//	Retrograde(arr+1);
//	*(arr+len-1) = mid;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	Retrograde(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 1;
//	
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int n = 0;
//	int b = 1;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a & b) == b)
//			n++;
//		b = 2*b;
//	}
//	printf("%d", n);
//	return 0;
//}
// 
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int n = 0;
//	int b = 0;
//	for (i = 0; i < 32; i++)
//	{
//		b=1 << i;
//		if ((a & b) == b)
//			n++;
//	}
//	printf("%d", n);
//	return 0;
//}


//struct student
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//void FX(struct student* ps)
//{
//	//strcpy((*ps).name, "zhangsan");
//	//(*ps).age = 20;
//	//(*ps).score = 100.0;
//
//	strcpy(ps->name, "zhangsan");
//	ps->age = 20;
//	ps->score = 100.0;
//}
//
//void print(struct student* ps)
//{
//	//printf("%s %d %lf", (*ps).name, (*ps).age, (*ps).score);
//	printf("%s %d %lf", ps->name, ps->age, ps->score);
//}
//
//int main()
//{
//	struct student s = { 0 };
//	FX(&s);
//	print(&s);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[50] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int d = 0;
//	scanf("%d", &d);
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != d)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}]


//int main()
//{
//	char ch = 0;
//	//while (scanf("%c", &ch) == 1)
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else if (ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch + 32);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int num1 = (i / 10000) * (i % 10000);
//		int num2 = (i / 1000) * (i % 1000);
//		int num3 = (i / 100) * (i % 100);
//		int num4 = (i / 10) * (i % 10);
//		if ((num1 + num2) + (num3 + num4) == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//// 1.
// #include <stdio.h>
// 
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum += i * i;
//		}
//	}
//	printf("%d\n", sum);
//	
//	return 0;
//}


//#include <stdio.h>
//
//int main() 
//{
//    int sum = 0;
//    for (int i = 2; i <= 100; i += 2) 
//    {
//        sum += i * i;
//    }
//    printf("1到100中所有偶数的平方和为: %d\n", sum);
//    return 0;
//}

//2.
 
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int* b = (int*)malloc((sz - 1) * sizeof(int));
//	int i = 0;
//	
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		b[i] = a[i] + a[i + 1];
//	}
//	for (i = 0; i < sz - 1; i++)
//	{
//		if (i % 3 == 0 && i != 0)
//			printf("\n");
//		printf("%d ", b[i]);
//	}
//	free(b);
//	return 0;
//}



////3.
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 5,7,3,6,4,5,9,2,1,9 };//10个数
//	int i = 0;
//	int max = arr[1];
//	
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	
//	return 0;
//}


////4.
//#include <stdio.h>
//
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int a = input / 100;
//	int b = (input % 100) / 10;
//	int c = input % 10;
//	printf("%d%d%d", c, b, a);
//	
//	return 0;
//}

//
////5.
//#include <stdio.h>
//
//int main()
//{
//	char input = 0;
//	scanf("%c", &input);
//	switch (input)
//	{
//	case'A':
//		printf("90分以上\n");
//		break;
//	case'B':
//		printf("80-89分\n");
//		break;
//	case'C':
//		printf("70-79分\n");
//		break;
//	case'D':
//		printf("60-69分\n");
//		break;
//	case'E':
//		printf("60分以下\n");
//		break;
//	}
//	return 0;
//}



////6.
//#include <stdio.h>
//
//int main()
//{
//	int arr[4][4] = { 5,6,7,8,5,6,7,8,5,6,7,8,5,6,7,8 };//设该4X4矩阵为  5 6 7 8 
//														//				 5 6 7 8
//														//				 5 6 7 8
//														//				 5 6 7 8
//	printf("%d", arr[0][0] + arr[1][1] + arr[2][2] + arr[3][3]);
//	return 0;
//}




//#include <stdio.h>
//
//#define IN 1  /* 在单词内 */
//#define OUT 0 /* 在单词外 */

//int main() 
//{
  //int c, nl,    nw,     nc,      state;
// //////   //行数//单词数//字符数//读取数据的位置（状态）
//    state = OUT;
//    nl = nw = nc = 0;
//    while ((c = getchar()) != EOF) 
//    {
//        ++nc;
//        if (c == '\n') 
//        {
//            ++nl;
//        }
//        if (c == ' ' || c == '\n' || c == '\t') 
//        {
//            state = OUT;
//        }
//        else if (state == OUT) 
//        {
//            state = IN;
//            ++nw;
//        }
//    }
//    printf("Lines: %d\nWords: %d\nCharacters: %d\n", nl, nw, nc);
//    return 0;
//}


//#include <stdio.h>
//
//#define IN 1  /* 在单词内 */
//#define OUT 0 /* 在单词外 */
//int main()
//{
//	int c = 0;
//	int nl = 0;
//	int nw = 0;
//	int nc = 0;
//	int state = 0;
//
//
//
//	return 0;
//}



//int main()
//{
//	int c;
//	int a = 10;
//	int b = 20;
//	if (c > a)
//	{
//		c = a;
//	}
//	if (c > b)
//	{
//		c = b;
//	}
//	return 0;
//}
//#define N 10
//int main()
//{
//	int a[N];
//	int i, n, sum = 0;
//	float p;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		sum = sum + a[i];
//	}
//	p = (float)sum / n;
//	printf("%.2f", p);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//
//double sign(int x)
//{
//    double y;
//    if (x > 0)
//        y = x * 2.5;
//    else if (x == 0)
//        y = 0.0;
//    else
//        y = x * x;
//    return y;
//}
//
//
//int main()
//{
//    double a;
//    scanf("%lf", &a);
//    double y = sign(a);
//    printf("%.2lf", y);
//
//    return 0;
//}
//


//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int count = money;
//	int empty = money;
//	while (empty / 2 != 0)
//	{
//		count += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int i = 1;
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	while ((a == i || b == i) != 1)
//	{
//		i++;
//		if (a % i == 0 && b % i == 0)
//		{
//			n = i;
//		}
//	}
//	printf("%d\n", a * b / n);
//	return 0;
//}


//int main()
//{
//	char arr[100] = "I love beijing.";
//	int sz = strlen(arr);
//	char brr[100] = { 0 };
//	int right = sz - 1;
//	int i = 0;
//	int count = 0;
//	for (right = sz - 1; right > 0; right--)
//	{
//		if (arr[right] == ' ')
//		{
//			int n = 1;
//			for (n = 1; n < sz; n++)
//			{
//				brr[i] = arr[right + n];
//				i++;
//				if (count == n)
//				{
//					brr[i++] = ' ';
//					count = 0;
//					break;
//				}
//			}
//		}
//		if (arr[right] != ' ')
//		{
//			count++;
//		}
//	}
//	int m = i;
//	for (count = 0; count < sz-m; count++)
//	{
//		brr[i++] = arr[count];
//	}
//	printf("%s", brr);
//	return 0;
//}


//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct student
//{
//    int ID;
//    char name[20];
//    int math;
//    int English;
//    int Chinese;
//    int all;
//    int average;
//}STUDENT;
//
//int main()
//{
//    FILE* fp;
//    STUDENT stu[10000];
//    int i = 0;
//    fp = fopen("f2.txt", "w");
//    if (fp == NULL)
//    {
//        printf("文件无法打开");
//        return 0;
//    }
//
//    for (i = 0; i < 10000; i++)
//    {
//        scanf("%d", &stu[i].ID);
//       
//        if (stu[i].ID == -1)
//        {
//            break;
//        }
//        else
//        {
//            scanf("%s %d %d %d", &stu[i].name, &stu[i].math, &stu[i].English, &stu[i].Chinese);
//            stu[i].all = (stu[i].math + stu[i].English + stu[i].Chinese) * 1;
//            stu[i].average = stu[i].all / 3;
//        }
//    }
//    
//    for (i = 0; i < 10000; i++)
//    {
//        if (stu[i].ID == -1)
//        {
//            break;
//        }
//        fprintf(fp, "%d %s %-7d %-7d %-7d %-7d %-7d\n", stu[i].ID, stu[i].name, stu[i].math, stu[i].English, stu[i].Chinese, stu[i].all, stu[i].average);
//        printf("%d %s %-7d %-7d %-7d %-7d %-7d\n", stu[i].ID, stu[i].name, stu[i].math, stu[i].English, stu[i].Chinese, stu[i].all, stu[i].average);
//    }
//    return 0;
//}
//00000000 00000000 00000000 10000000
//01111111 11111111 11111111 01111111
//01111111 11111111 11111111 10000000
//10000000
//11111111 11111111 11111111 10000000
//
//10000000 00000000 00000000 00010100
//11111111 11111111 11111111 11101011
//11111111 11111111 11111111 11101100   i
//00000000 00000000 00000000 00001010
//11111111 11111111 11111111 11110110   i+j
//10000000 00000000 00000000 00001001
//10000000 00000000 00000000 00001010   -10

//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    for (int i = 1; i <= n / 2 + 1; i++)
//    {
//        for (int k = 1; k <= n - 2 * i + 1; k++)
//        {
//            printf(" ");
//        }
//        for (int j = 1; j <= 2 * i - 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for (int i = 1; i <= n / 2; i++)
//    {
//        for (int k = 1; k <= 2 * i; k++)
//        {
//            printf(" ");
//        }
//        for (int j = 1; j <= n - 2 * i; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//  
//
// 
// 
// 
//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *
//
int main()
{
	int n = 0;
	int i = 0;
	int k = 0;
	scanf("%d", &n);
	for (k = 1; k <= n; k++)
	{
		for (i = 0; i < n - k; i++)
		{
			printf(" ");
		}
		for (i = 0; i < (2 * k - 1); i++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (k = n+1; k <= 2*n - 1; k++)
	{
		for (i = 0; i < k - n; i++)
		{
			printf(" ");
		}
		for (i = 0; i < 2 * (2 * n - k) - 1; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}