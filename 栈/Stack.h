#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>

typedef	int StackValType;

typedef struct Stack {
	StackValType* a;
	int top;
	int cap;
}ST;



void STInit(ST* ps);//初始化
void STPush(ST* ps, StackValType x);//入栈
void STPop(ST* ps);//出栈
int STSize(ST* ps);//数据数量
StackValType STTop(ST* ps);//返回栈顶元素
bool STEmpty(ST* ps);//判断栈是否为空
void STDestory(ST* ps);//栈的销毁
void STPrint(ST* ps);//栈的数据打印

