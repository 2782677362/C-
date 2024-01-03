#define  _CRT_SECURE_NO_WARNINGS

#include "Contact.h"

int main()
{
	int input = 0;
	InitContact(&con);
	int peo = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			PrSearContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			SortContact(&con);
			break;
		case 0:
			printf("关闭通讯录\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} 
	while (input);
	return 0;
}