#ifndef STACK_H
#define STACK_H

typedef struct Node {} Node;

typedef struct Stack {} Stack;

Stack* create_stack(int s);

int stack_length(Stack *top);

void push(int d, Stack *top);

void pop(Stack *top);

void print(Stack *top);

int peek(Stack *top);

#endif /* STACK_H */
