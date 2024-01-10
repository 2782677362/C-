#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int j = 0; j < n - 1; j++)
//    {
//        for (int i = 0; i < n - j - 1; i++)
//        {
//            if (arr[i] > arr[i + 1])
//            {
//                int tem = arr[i];
//                arr[i] = arr[i + 1];
//                arr[i + 1] = tem;
//            }
//        }
//    }
//    printf("%d %d %d %d %d", arr[n - 1], arr[n - 2], arr[n - 3], arr[n - 4], arr[n - 5]);
//    return 0;
//}


#include <stdio.h>
#include <string.h>
int main()
{
    char arr1[10] = { 0 };
    char arr2[10] = { 0 };
    scanf("%s", &arr1);
    scanf("%s", &arr2);
    if (strcmp(arr1, "admin") == 0 && strcmp(arr2, "admin") == 0)
    {
        printf("Login Success!");
    }
    else
    {
        printf("Login Fail!");
    }
    return 0;
}