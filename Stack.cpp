#include <stdlib.h>
#include <stdio.h>
#include "Stack.h"

#define INIT_STACK_SIZE 3

Stack::Stack()
{
	top = 0;
	data = (int*)malloc(sizeof(int)*INIT_STACK_SIZE);
	size = INIT_STACK_SIZE;
}

Stack::~Stack()
{
	free(data);
}

void Stack::push(int element)
{
	top++;
	if(top < size)
	{
		data[top-1] = element;
	}
	else
	{
		printf("**stack size increase**\n");
		size *= 2;
		data = (int*)realloc(data, sizeof(int)*(size));
		data[top-1] = element;
	}
}

int Stack::pop()
{
	if(isEmpty())
	{
		printf("Stack is empty!\n");
		abort();
	}
	else
	{
		top--;
		return data[top];
	}
}

bool Stack::isEmpty()
{
	if(top == 0) return true;
	else return false;
}

void Stack::display()
{
	int i = 0;
	while(i<top)
	{
		printf("%d, ", data[i]);
		i++;
	}
	printf("\n");
}
