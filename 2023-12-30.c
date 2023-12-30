#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}


//int main()
//{
//	int arr[5][5];
//	int(*p)[4];
//	p = arr;
//	printf("%p,%d\n", &p[4][2] - &arr[4][2], &p[4][2] - &arr[4][2]);
//	printf("%d\n", &arr[2][2] - &arr[2][0]);
//	return 0;
//}


//
//0 0 0 0 0
//0 0 0 0 0
//0 0 0 0 0
//0 0 0 0 0
//0 0 0 0 0
//



//牛牛口渴了，要喝10升水才能解渴，但现在只有一个深 h 厘米，底面半径是 r 厘米的水杯，牛牛最少要喝多少杯水才能解渴。
//π  取 3.14 ，
//
//#include <stdio.h>
//
//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        int v = 3.14 * a * b * b;
//        int ret = 10000 / v;
//        if ((double)(10000 % v) != 0)
//        {
//            ret++;
//        }
//        printf("%d\n", ret);
//    }
//    return 0;
//}



//#include <stdio.h>
//
//int main() {
//
//    int a;
//    scanf("%d", &a);
//    printf("%3f\n", 3.14 * (4.0 / 3) * a * a * a);
//
//    return 0;
//}



//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    if (a % 2 == 0)
//        printf("2 ");
//    if (a % 3 == 0)
//        printf("3 ");
//    if (a % 7 == 0)
//        printf("7 ");
//    if (a % 2 != 0 && a % 3 != 0 && a % 7 != 0)
//        printf("n");
//    return 0;
//}

//int main()
//{
//    float a = 0;
//    char b = 0;
//    scanf("%f %s", &a, &b);
//    int money = 0;
//    int more = 0;
//    if (a > 1.0)
//    {
//        float c = a;
//        while(c > 1.0)
//        {
//            c = c - 1;
//            more++;
//        }
//    }
//    if (b == 'y')
//    {
//        if (a <= 1.0)
//        {
//            money = 25;
//        }
//        else
//        {
//            money = 25 + more;
//        }
//    }
//    else
//    {
//        if (a <= 1.0)
//        {
//            money = 20;
//        }
//        else
//        {
//            money = 20 + more;
//        }
//    }
//    printf("%d\n", money);
//    return 0;
//}


//int main()
//{
//    int x, y, x1, y1;
//    scanf("%d %d %d %d", &x, &y, &x1, &y1);
//    if (x1 > x)
//        printf("r");
//    else if (x1 < x)
//        printf("l");
//    else if (y1 > y)
//        printf("u");s
//    else
//        printf("d");
//
//    return 0;
//}


//int main() {
//    int a, b, c, x, y, z;
//    scanf("%d %d %d %d %d %d", &a, &b, &c, &x, &y, &z);
//    if (x > a)
//    {
//        printf("yes");
//    }
//    else if (x == a)
//    {
//        if (y > b)
//            printf("yes");
//        else if (y == b)
//        {
//            if (z >= c)
//                printf("yes");
//            else
//                printf("no");
//        }
//        else
//        {
//            printf("on");
//        }
//    }
//    else
//    {
//        printf("no");
//    }
//
//    return 0;
//}