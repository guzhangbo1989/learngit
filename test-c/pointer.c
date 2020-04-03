#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Bubble(int* s, int n);
void Show(int* s, int n);

int main()
{
	int a[] = {2,3,1,4,6,7,5,8,9};	
	Bubble(a , 9);
	int* pa = a;
	Show(pa, 9);
	return 0;
}

void Show(int* s, int n)
{
	int i = 0;
	printf("After sort : ");
	for (i ; i < n; i++)
	{
		printf("%d ", s[i]);
	}	
	printf("\n");
}

void Bubble(int* s, int n)
{
	int i;
	for ( i = 0;i < n; i ++)
	{
		int j = n-1;
		for (j ; j > i; j --)
		{
			if (s[j] < s[j-1])
			{	
				int temp = s[j];
				s[j] = s[j-1];
				s[j-1] = temp;
			}
		} 
	}	
}


/*
*************
int SqSearch(int* a, int n,int k);

int main()
{
	int a[] = {13,67,89,2,15,99,77,56,34};
	int k = SqSearch(a, 9 , 15);
	if (k>=0)
	{
		printf("finding is successful!\n");
	}
	else
	{
		printf("can't find that number!\n");
	}
	return 0;
}


int SqSearch(int* a, int n,int k)
{
	int i;
	for (i = 0; i < n; i ++)
	{
		if (a[i] == k)
		{
			return 1;
		}
	}
	return -1;
}


**********************
int Add(int a, int b);
void main()
{
	int (*pAdd)(int, int) = Add;
	int x = pAdd(2, 3);
	int c = (*pAdd)(2, 3);
	printf("%d %d\n", x, c);
	//double(*psin)(double) = sin;
	return;
}
int Add(int a,int b)
{
	return a + b;
}


****************
typedef struct _stu
{
	char name[20];
	char id[20];
	int age;
}student;

void main()
{
	student s1 = {"zhangsan","20180023",20};
	student* ps1 = &s1;
	ps1->age = 22;
	strcpy(ps1->name,"Lisa");
	printf("s1.name=%s s1.id=%s s1.age=%d\n",s1.name, s1.id, s1.age);
	return;
}


*******************
void main()
{
	int k = 90;
	printf("address of k is: %x\n", &k);
	int *pk = &k;
	printf("pk value is : %x\n", &pk);
	int **ppk = &pk;
	printf(" **ppk value is : %d\n", **ppk);
	
	int *pa[2];
	printf(" pa's address is : %x\n",&pa );
	int ppa = &pa[0];
	printf(" **ppk value is : %d\n", **ppk);
	
	return;
}


************************
void main()
{
	int n;
	scanf("%d",&n);
	int * pa = (int*)malloc(n * sizeof(int));
	int i;
	for (i = 0; i < n; i ++)
	{
		pa[i] = i;
		printf("pa[%d]=%d\n",i,i);
	}
	free(pa);
	return;
}


***********
void swap(int* px, int* py);
void main()
{
	int x = 2 , y = 3;
	printf("x = %d, y = %d\n", x, y);
	swap(&x, &y);
	printf("After exchange x&y:\n");
	printf("x = %d , y = %d\n", x, y);
	return ;
}

void swap(int* px, int* py)
{
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}

**************
void main()
{
	int x = 20 , y = 30;
	double a[1000] = { 0,1};
	printf("address of x is : %p\n", &x);
	printf("address of y is : %p\n", &y);
	printf("address of a[] is : %p\n", a);
	printf("address of a[0] is : %p\n", &a[0]);
	printf("address of a[1] is : %p\n", &a[1]);
	return ;
}

********************

void Move(char from, char to);
void Hanoi(int n, char p1, char p2, char p3);
const int N = 5;
int main()
{
	Hanoi(N,'A', 'B', 'C');	
	return 0;
}

void Move(char from, char to)
{
	printf("from %c to %c \n", from , to );
}

void Hanoi(int n, char p1, char p2, char p3)
{
	if (n == 1)
		Move(p1,p3);
	else
	{
		Hanoi(n - 1, p1, p3, p2);
		Move(p1 ,p3);
		Hanoi(n - 1, p2, p1, p3);
	}
}

********************
	int a[3];
	int i,j;
	printf("please input an array:\n");
	for (i=0; i<3; i++) scanf("%d",&a[i]);
	int big=a[0];
	for (j=0; j<3; j++) if(a[j]>big) big=a[j];
	printf("MAX = %d\n",big);


  int i;
  int* p= NULL;
  for(i=0;i<100;i++)
  {
    p = (int*)malloc(i);
    printf("%d ",_msize(p));
    free(p);
  }
*/
