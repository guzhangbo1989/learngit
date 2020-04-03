#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Q
{
	int *que;
	int front;
	int rear;
}Que;

Que* CreateQueue(int len);
void EnQueue(Que* q, int data);
void PrintQueue(Que* pq);
void Popqueue(Que* pq, int num);

int main()
{
	const int qMAX = 100;
	Que* q1=CreateQueue(qMAX);
	if (q1 == NULL)
	{
		return -1;
	}	
	EnQueue(q1, 12);
	EnQueue(q1, 4);
	EnQueue(q1, 22);
	PrintQueue(q1);
	Popqueue(q1, 1);
	PrintQueue(q1);
	
	return 0;
}

void Popqueue(Que* pq, int num)
{
	if (num > pq->rear - pq->front)
	{
		printf("no enough number!\n");
		exit(1) ;
	}
	pq->front =+ num;
	pq->que[pq->front] =0;
}

void PrintQueue(Que* pq)
{
	int i=0;
	printf("what's in the queue is:");
	for (i=pq->front + 1; i <= pq->rear; i++)
	{
		printf(" %d ", pq->que[i]);
	}
	printf("\n");
}

void EnQueue(Que* q, int data)
{
	q->rear++;
	q->que[q->rear] = data;
}

Que* CreateQueue(int len)
{
	Que* q=(Que*)malloc(sizeof(Que));
	if (q)
	{
		q->que=(int*)malloc(len* sizeof(int));
		if (q->que==NULL)
		{
			return NULL;
		}
		q->front=0;
		q->rear=0;
	}
	return q;
}
