#define  _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) == 1)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            printf("* ");
//        }
//        for (int j = 0; j < a - 2; j++)
//        {
//            printf("\n* ");
//            for (int i = 0; i < a - 2; i++)
//            {
//                printf("  ");
//            }
//            printf("* ");
//        }
//        printf("\n");
//        for (int i = 0; i < a; i++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int x = 0;
//    int count = 0;
//    scanf("%d", &x);
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] == x)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}



#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n][n];
    arr[1][1] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
            {
                arr[i][j] = 1;
                printf("%5d", 1);
            }
            else
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
                printf("%5d", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}