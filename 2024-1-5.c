#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//    int a, b;
//    while (scanf("%d %d", &a, &b) == 2)
//    {
//        if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
//        {
//            printf("31\n");
//        }
//        else if (b == 2)
//        {
//            if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
//            {
//                printf("29\n");
//            }
//            else
//            {
//                printf("28\n");
//            }
//        }
//        else
//        {
//            printf("30\n");
//        }
//    }
//    return 0;
//}


//
//int main()
//{
//    double w = 0;
//    double h = 0;
//    scanf("%lf %lf", &w, &h);
//    int bmi = w / (h * h);
//    if (bmi >= 18.5 && bmi <= 23.9)
//    {
//        printf("Normal\n");
//    }
//    else
//    {
//        printf("Abnormal\n");
//    }
//    return 0;
//}
//


//int main()
//{
//    double price = 0;
//    int m = 0;
//    int d = 0;
//    int c = 0;
//    double ret = 0;
//    scanf("%lf %d %d %d", &price, &m, &d, &c);
//    if (m == 11 && d == 11)
//    {
//        ret = price * 0.7;
//    }
//    else if (m == 12 && d == 12)
//    {
//        ret = price * 0.8;
//    }
//    else
//    {
//        ret = price;
//    }
//    if (c == 1)
//    {
//        ret -= 50.0;
//    }
//    if (ret < 0)
//    {
//        ret = 0;
//    }
//    printf("%.2lf", ret);
//    return 0;
//}



int main()
{
    int count = 0;
    int n = 0;
    if (scanf("%d", &n) == 1);
    {
        for (int i = 0; i < n; i++)
        {
            int a, b, c;
            if (scanf("%d %d %d", &a, &b, &c) == 3);
            {
                float d = (a + b + c) / 3.0;
                if (d < 60)
                {
                    count++;
                }
            }
        }
    }
    printf("%d\n", count);
    return 0;
}