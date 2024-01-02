#define  _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <math.h>


////////////////////////////////////////////////////////´íÎó´úÂë

//int main()
//{
//    int n = 0;
//    int i = 0;
//    int k = 0;
//    int j = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        for (k = 1; k < 6; k++)
//        {
//            if ((int)i / pow(10, k) == 0)
//                break;
//        }
//        for (j = 1; j < k; j++, k--)
//        {
//            if ((int)i % pow(10, j) != (int)i / pow(10, k - 1))
//            {
//                break;
//            }
//            if (j >= k - 1)
//                printf("%d\n", i);
//        }
//    }
//    return 0;
//}
////////////////////////////////////////////////////////´íÎó´úÂë




////////////////////////////////////////////////////////´íÎó´úÂë
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    int k = 0;
//    scanf("%d", &n);
//    while (n > 0)
//    {
//        ret += n % 6 * (int)pow(10, k);
//        n = n / 6;
//        k++;
//    }
//    printf("%d\n", ret);
//    return 0;
//}
////////////////////////////////////////////////////////´íÎó´úÂë




//int main()
//{
//    int n, k;
//    int i = 0;
//    int count = 0;
//    scanf("%d", &n);
//    int arr[30];
//    while (n > 0)
//    {
//        arr[i++] = n % 6;
//        n = n / 6;
//        count++;
//    }
//    for (i = count - 1; i >= 0; i--)
//    {
//        printf("%d", arr[i]);
//    }
//    return 0;
//}


//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int n, k;
//    scanf("%d", &n);
//    int ret[100], i = 0;
//    while (n > 0)
//    {
//        ret[i] = n % 6;
//        n = n / 6;
//        i++;
//    }
//    for (k = i - 1; k >= 0; k--)
//    {
//        printf("%d", ret[k]);
//    }
//    return 0;
//}
