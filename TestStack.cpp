#include <stdio.h>
#include "Stack.h"

int main(int argc, char const *argv[])
{
	Stack stack1;
	Stack stack2;

	stack1.push(23);
	stack1.display();
	
	stack1.push(4);
	stack1.display();

	printf("popped: %d\n", stack1.pop());
	stack1.display();

	for(int i = 0; i < 13; i++)
	{
		stack1.push(100 + i);
		stack1.display();
	}

	printf("popped: %d\n", stack1.pop());
	stack1.display();

	return 0;
}
