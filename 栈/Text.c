#include "Stack.h"


int main()
{
	ST stack;
	int x = 1;
	STInit(&stack);
	STPush(&stack, x);
	STPush(&stack, 2);
	STPush(&stack, 3);
	 x = 4;

	STPush(&stack, x);
	 x = 5;

	STPush(&stack, x);
	 x = 6;

	STPush(&stack, x);
	 x = 7;

	STPush(&stack, x);

	STPrint(&stack);

	STPush(&stack, 8);
	STPush(&stack, 9);
	STPush(&stack, 10);

	STPrint(&stack);

	STPush(&stack, 11);
	STPush(&stack, 12);
	STPush(&stack, 13);

	int ret = STTop(&stack);
	printf("%d\n", ret);

	int size = STSize(&stack);
	printf("%d\n", size);

	STPush(&stack, 14);
	STPush(&stack, 15);
	STPush(&stack, 16);
	size = STSize(&stack);
	printf("%d\n", size);

	bool key = STEmpty(&stack);
	if (key == true)
		printf("ture\n");
	else
		printf("false\n");
	
	STPrint(&stack);

	key = STEmpty(&stack);
	if (key == true)
		printf("ture\n");
	else
		printf("false\n");

	return 0;
}