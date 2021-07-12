#include "Stack.h"


int main()
{
	Stack *s = create_stack(3);
	push(1, s);
	push(2, s);
	push(3, s);
	print(s);
	printf("\nLength = %d", stack_length(s));
	pop(s);
	print(s);
	pop(s);
	pop(s);
	print(s);
	pop(s);
	print(s);
	printf("\nPeek = %d", peek(s));
	push(4, s);
	push(5, s);
	print(s);
	printf("\nPeek = %d", peek(s));
	return 0;
}