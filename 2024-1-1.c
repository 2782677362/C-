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



char* my_strcpy(char* arr2,char* arr1)
{
	assert(arr1 && arr2);
	char* p = arr2;
	while (*(arr2++) = *(arr1++))
		;
	return p;
}

int main()
{	
	char arr1[] = "abcdefg";
	char arr2[20] = { 0 };
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}