#define  _CRT_SECURE_NO_WARNINGS


//牛客网(BC77)
//https://www.nowcoder.com/practice/b8f770674ba7468bb0a0efcc2aa3a239?tpId=290&tqId=307624&ru=/exam/oj&qru=/ta/beginner-programmers/question-ranking&sourceUrl=%2Fexam%2Foj




//模拟计算器
//法一
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//    int i = 0;
//    char arr[51] = { 0 };
//    scanf("%s", arr);
//    int len = strlen(arr);
//    double num1 = atof(arr);
//    for (i = 0; i < len; i++)
//    {
//        if (arr[i] == '+')
//        {
//            double num2 = atof(arr + i + 1);
//            double ret = num1 + num2;
//            printf("%.4f+%.4f=%.4f\n", num1, num2, ret);
//            break;
//        }
//        else if (arr[i] == '-')
//        {
//            double num2 = atof(arr + i + 1);
//            double ret = num1 - num2;
//            printf("%.4f-%.4f=%.4f\n", num1, num2, ret);
//            break;
//        }
//        else if (arr[i] == '*')
//        {
//            double num2 = atof(arr + i + 1);
//            double ret = num1 * num2;
//            printf("%.4f*%.4f=%.4f\n", num1, num2, ret);
//            break;
//        }
//        else if (arr[i] == '/')
//        {
//            double num2 = atof(arr + i + 1);
//            if (num2 != 0)
//            {
//                double ret = num1 / num2;
//                printf("%.4f/%.4f=%.4f\n", num1, num2, ret);
//                break;
//            }
//            else
//            {
//                printf("Wrong!Division by zero!\n");
//                break;
//            }
//        }
//    }
//    if (i == len)
//    {
//        printf("Invalid operation!\n");
//    }
//    return 0;
//}


//法二
#include <stdio.h>

int main()
{
    double num1 = 0.0;
    double num2 = 0.0;
    char X;
    if (scanf("%lf%c%lf", &num1, &X, &num2) == 3)
    {
        if (X == '+')
        {
            printf("%.4lf%c%.4lf=%.4lf", num1, X, num2, num1 + num2);
        }
        else if (X == '-')
        {
            printf("%.4lf%c%.4lf=%.4lf", num1, X, num2, num1 - num2);
        }
        else if (X == '*')
        {
            printf("%.4lf%c%.4lf=%.4lf", num1, X, num2, num1 * num2);
        }
        else if (X == '/')
        {
            if (num2 != 0.0)
            {
                printf("%.4lf%c%.4lf=%.4lf", num1, X, num2, num1 / num2);
            }
            else
            {
                printf("Wrong!Division by zero!");
            }
        }
        else
        {
            printf("Invalid operation!");
        }
    }
    return 0;
}