#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//size_t my_strlen1(char* str)
//{
//	size_t count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//size_t my_strlen2(char* str)
//{
//	assert(str);
//	char* p = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - p;
//}
//
//size_t my_strlen3(char* str)
//{
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen3(str + 1);
//}
//
//int main()
//{
//	char arr[] = "abcedfg";
//	size_t len1 = my_strlen1(arr);
//	size_t len2 = my_strlen2(arr);
//	size_t len3 = my_strlen3(arr);
//	printf("%zu\n", len1);
//	printf("%zu\n", len2);
//	printf("%zu\n", len3);
//	return 0;
//}



//char* my_strcpy(char* arr2,char* arr1)
//{
//	assert(arr1 && arr2);
//	char* p = arr2;
//	while (*(arr2++) = *(arr1++))
//		;
//	return p;
//}
//
//int main()
//{	
//	char arr1[] = "abcdefg";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}



//牛客网圣诞树(BC114)
//https://www.nowcoder.com/practice/9a03096ed8ab449e9b10b0466de29eb2?tpId=290&tqId=2337396&ru=/exam/oj&qru=/ta/beginner-programmers/question-ranking&sourceUrl=%2Fexam%2Foj
int main()
{
    int i = 0;
    int j = 0;
    int h = 0;
    int count = 0;
    scanf("%d", &h);
    for (i = 0; i < 3 * h; i++)
    {
        if (i % 3 == 0)
            count++;
        for (j = 0; j < 3 * h - 1 - i; j++)
        {
            printf(" ");
        }
        if (i % 3 == 0)
        {
            for (j = 0; j < count; j++)
            {
                printf("*     ");
            }
            printf("\n");
        }
        else if (i % 3 == 1)
        {
            for (j = 0; j < count; j++)
            {
                printf("* *   ");
            }
            printf("\n");
        }
        else
        {
            for (j = 0; j < count; j++)
            {
                printf("* * * ");
            }
            printf("\n");
        }
    }
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < 3 * h - 1; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}
