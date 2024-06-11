#include "Stack.h"

void STInit(ST* ps)//��ʼ��
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;
	ps->cap = 0;
}

void STPush(ST* ps, StackValType x)//��ջ
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

void STPop(ST* ps)//��ջ
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}

int STSize(ST* ps)//��������
{
	assert(ps);
	return ps->top;
}

StackValType STTop(ST* ps)//����ջ��Ԫ��
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}

bool STEmpty(ST* ps)//�ж�ջ�Ƿ�Ϊ��
{
	assert(ps);
	return ps->top == 0;
}

void STDestory(ST* ps)//ջ������
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->cap = 0;
}

void STPrint(ST* ps)//ջ�����ݴ�ӡ
{
	assert(ps);
	while (ps->top)
	{
		printf("%d ", ps->a[ps->top - 1]);
		STPop(ps);
	}
	printf("\n");
}
