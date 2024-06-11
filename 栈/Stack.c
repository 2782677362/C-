#include "Stack.h"

void STInit(ST* ps)//初始化
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;
	ps->cap = 0;
}

void STPush(ST* ps, StackValType x)//入栈
{
 	assert(ps);
	if (ps->top == ps->cap)
	{
		int newcap = ps->cap == 0 ? 4 : 2 * ps->cap;
		StackValType* arr = (StackValType*)realloc(ps->a, newcap * sizeof(StackValType));
		if (arr == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		ps->a = arr;
		ps->cap = newcap;
	}
	ps->a[ps->top] = x;
	ps->top++;
}

void STPop(ST* ps)//出栈
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}

int STSize(ST* ps)//数据数量
{
	assert(ps);
	return ps->top;
}

StackValType STTop(ST* ps)//返回栈顶元素
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}

bool STEmpty(ST* ps)//判断栈是否为空
{
	assert(ps);
	return ps->top == 0;
}

void STDestory(ST* ps)//栈的销毁
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->cap = 0;
}

void STPrint(ST* ps)//栈的数据打印
{
	assert(ps);
	while (ps->top)
	{
		printf("%d ", ps->a[ps->top - 1]);
		STPop(ps);
	}
	printf("\n");
}
