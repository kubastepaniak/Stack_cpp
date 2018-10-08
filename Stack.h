#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

class Stack {
public:
	Stack();
	~Stack();
	void push(int element);
	int pop();
	bool isEmpty();
	void display();
private:
	int top;
	int *data;
	int size;
};

#endif
