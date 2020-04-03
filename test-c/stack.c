#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct STACK
{
	int* Sarray;
	int top;
	int bottom;
}Stack;

int Push(Stack* stack,int data, int max);
int Pop(Stack* stack);

int main()
{
	Stack *pStack=(Stack*)malloc(sizeof(Stack));
	const int MAX = 100;
	if (pStack) {
		pStack->Sarray = (int*)malloc(sizeof(int)*5);
		pStack->top = 0;
		pStack->bottom = 0;
	}
	int i ,t;
	for (i=0;i <6 ;i ++) {
		t = Push(pStack, i+1, MAX);
		if (t == 0) {
			printf("stack is full!\n");
			break;
		}
	}
	printf("element in stack is: ");
	int j;
	for (j =0; j<5; j++) {
		printf("%2d  ",pStack->Sarray[j]);
	}
	printf("\n");
	printf("address of top stack = %d \n",t);
	//pStack->Sarray[pStack->top] = Pop(pStack);
	printf("now address of top stack is:%d \n",Pop(pStack));
	return 0 ;
}

int Push(Stack* stack, int data, int max)
{
	if (stack->top == max) {
		printf("stack is full!\n");
		return 0;
	}
	stack->Sarray[stack->top] = data;
	stack->top ++;
	return stack->top;
}

int Pop(Stack* stack)
{
	if(stack->top > stack->bottom) {
		stack->top --;
		return stack->top;
	} else {
		return 0;
	}
}

/* create a stack and return pointer of that stack
Stack* CreateStack(int length)
{
	Stack* stack= (Stack*)malloc(sizeof(Stack));
	if (stack)
		stack->Sarray = (int *)malloc(length* sizeof(int));
		if (stack->Sarray == NULL)
			return NULL;
		stack->bottom=0;
		stack->top=0;
	return stack;
}

*/

