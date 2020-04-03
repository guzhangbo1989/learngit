#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct List
{
	int* list;
	int len;
	int MaxLen;
}L;

int main()
{
	L *CreatList(int n);
	const int MAXLEN=10;
	int checklist(L *sqList);
	
	L *sqList1=CreatList(MAXLEN);
	sqList1->list[0] = 1;	
	sqList1->list[1] = 2;	
	sqList1->list[2] = 3;	
	sqList1->list[3] = 4;	
	sqList1->list[4] = 5;	
	sqList1->list[5] = 6;	
	sqList1->list[6] = 7;	

	sqList1->len = checklist(sqList1);
	void PrintList(L *sqList);
	PrintList(sqList1);	

	int InsertList(L *sqList, int pos, int data);
	InsertList(sqList1,4,88);
	sqList1->len = checklist(sqList1);
	PrintList(sqList1);	
	
	int DeleteList(L *pList, int pos);
	DeleteList(sqList1, 2);
	PrintList(sqList1);	
	
	int FindPrevNum(L *pList,int value);
	FindPrevNum(sqList1, 5);
	printf("+++++++++++++++separator++++++++++++++++\n");
	int FindNextNum(L *pList,int value);
	FindNextNum(sqList1, 5);
	printf("+++++++++++++++separator++++++++++++++++\n");
	printf("The return value of previous number is:%d \n", FindPrevNum(sqList1, 5));
	printf("The return value of next number is:%d \n", FindNextNum(sqList1, 5));
	
	return 0;
}

int FindNextNum(L *pList,int value)
{
        int i;
        printf("The number you want to find is: %d\n",value);
        for (i=0; i< pList->len-1; i++)
                if (pList->list[i] == value)
                        if (pList->list[i+1]) {
                                printf("The next number is: %d \n", pList->list[i+1]);
                                return pList->list[i+1];
                        }else{
                                printf("The next number doesn't exist!\n");
                                return -1;
                        }
        printf("The number you want to find doesn't exist!\n");
        return -1;
}

int FindPrevNum(L *pList,int value)
{
	int i;
	printf("The number you want to find is: %d\n",value);
	for (i=0; i< pList->len-1; i++)
		if (pList->list[i] == value) 
			if (pList->list[i-1]) { 
				printf("The previous number is: %d \n", pList->list[i-1]);
				return pList->list[i-1];
			}else{
				printf("The previous number doesn't exist!\n");
				return -1;
			}
	printf("The number you want to find doesn't exist!\n");
	return -1;
}


int DeleteList(L *pList, int pos)
{
	int k;
	if ( pos<0 || pos >pList->len || pList->len == pList->MaxLen)
		return -1;
	for (k = pos; k <= pList->len; k++)
		pList->list[k-1] = pList->list[k];
	
	pList->len--;
	return 0;
}

int checklist(L *sqList)
{
	int i=0;
	while (sqList->list[i])
		i++;
	return i;
}

int InsertList(L *sqList, int pos, int data)
{
	int i=0;
	if (pos<0 || pos>sqList->len || sqList->len == sqList->MaxLen)
		return -1;
	for (i = sqList->len; i > pos; i--)
		sqList->list[i] = sqList->list[i-1];
	sqList->list[pos]=data;
	sqList->len ++;
	return 0;
}

void PrintList(L *sqList)
{
	printf("sqList1.len=%d sqList1.maxlen=%d sqList1.list=",sqList->len, sqList->MaxLen);
        int i;
        for (i = 0; i < checklist(sqList); i++)
                printf("%d ",sqList->list[i]);
        printf("\n");
}

L *CreatList(int n)
{
	L *sqList=(L*)malloc(sizeof(L));
	if (sqList != NULL)
	{
		sqList->list = (int*)malloc(sizeof(int) *n);
		if (sqList->list == NULL)
			return NULL;
		sqList->len = 0;
		sqList->MaxLen  = n;
	}
	return sqList;
}

