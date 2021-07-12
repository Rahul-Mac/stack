#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node *link;
}Node;

typedef struct Stack
{
	int size;
	Node *node;
}Stack;

Stack* create_stack(int s)
{
	Stack *top = (Stack *)malloc(sizeof(Stack));
	top->size = s;
	top->node = NULL;
	return top;
}

int stack_length(Stack *top)
{
	Node *temp = top->node;
	int count = 0;
	while(temp != NULL)
	{
		count++;
		temp = temp->link;
	}
	return count;
}
void push(int d, Stack *top)
{
	if(top->size == stack_length(top))
		printf("\nOverflow");
	else
	{
		Node *n = (Node *)malloc(sizeof(Node));
		n->data = d;
		n->link = top->node;
		top->node = n;
	}
}

void pop(Stack *top)
{
	if(top->node == NULL)
		printf("\nUnderflow");
	else
	{
		Node *temp = top->node;
		top->node = top->node->link;
		free(temp);
	}
	
}

void print(Stack *top)
{
	printf("\n");
	if(top->node == NULL)
		printf("NULL");
	else
	{
		Node *temp = top->node;
		while(temp != NULL)
		{
			printf("%d ", temp->data);
			temp = temp->link;
		}
	}
}

int peek(Stack *top)
{
	if(top->node == NULL)
		return NULL;
	else
		return top->node->data;
}