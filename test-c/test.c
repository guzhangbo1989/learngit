#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


int main()
{
	int number;
	const N = 8;
	
	while (1) {
		printf("Please input a number:");
		scanf("%d", &number);
		if (number == N) {
			printf("Good! correct!\n");
			break;
		} else if (number > N) {
			printf("Error! greater than that number!\n");
		} else {
			printf("Error! less than that number!\n");	
		}
	}
	return 0;
}



/*
++++++++++++++++++++++++
int main()
{
	int number;
	int sum = 0;
	int count  = 0;
	
	scanf("%d", &number);
	while (number != -1){
		sum +=number;
		count ++;
		scanf("%d", &number);
	}
	printf("%f \n", 1.0*sum/count);
		
	return 0;
}



=====================
int main() 
{
	int x;
	int n=0;
	
	scanf("%d",&x);
	while (x>0) {
		n++;
		x /=10;
	}
	printf("%d\n",n);

	return 0;
}


==================
int main ()
{
	printf("Please input foot and inch(For example \" 5 7\" represent 5 foot 7 inch):");
	int  foot;
	int  inch;
	scanf(" %d %d",&foot , &inch);
	printf("Your height is: %f\n",( (foot + inch/12.0) * 0.3048));
	return 0;
}


==================
int main() 
{
	int cm	= 0;
	scanf("%d", &cm);
	
	int foot = cm / 2;
	int inch = ((cm - foot)*12);

	printf("%d  %d\n",foot ,inch);
	return 0;
}


====================
int main(int argc,char *argv[])
{
	printf("%s\n",argv[0]);
	int i = 1;
	while (i < argc)
	{
		printf("%s\n",argv[i]);
		i++;
	}
	return 0;
}

*******************************
int main()
{
	int *list;
	int  li;
	int a[]={1,2,3,4,5};
	list = &a[0];
	printf("%d \n",sizeof(a));
	printf("sizeof(list)=%d \n", sizeof(list))	;
	printf("sizeof(li)=%d \n", sizeof(li))	;
	return 0;
}


*************************
int main()
{
	int * list;
	int  li;
	printf("sizeof(list)=%d \n", sizeof(list))	;
	printf("sizeof(li)=%d \n", sizeof(li))	;
	return 0;
}


*************************
int test();
int main()
{
	srand((unsigned)time(NULL));
	int sum;
	int input;
	int i = 0;
	for (i ; i<5 ;i++)
	{
		sum = test();
		scanf("%d",&input);
		if (input == sum)
		{
			printf("Very Good!\n");
			continue;
		}
		while(input != sum)
		{
			printf("NO,Try Again:");
			scanf("%d",&input);
		}
		printf("Very Good!\n");
	}

	return 0;
}

int test()
{
	int a = rand()%101 - 1;
	int b = rand()%101 - 1;
	printf("%d + %d = ",a,b);
	return a + b;
}


********************
int TwoDice();
int main()
{
	srand((unsigned)time(NULL));
	int x = TwoDice();
	if (x == 7 || x == 11)
	{
		printf("(1) player win && dice=%d\n",x);
		return 0;
	}
	if (x ==2 || x ==3 || x == 12)
	{
		printf("(1)dealer win && dice=%d\n",x);
		return 0;
	}
	printf("_1_Dice=%d\n",x);
	if (x == 4 || x == 5 || x == 6 || x == 8 || x == 9 || x == 10)
	{
		int i = 2;
		while(1)
		{
			int y = TwoDice();
			printf("_%d_Dice=%d\n",i, y);
			if ( y == x)
			{
				printf("_%d_player win && dice=%d first x=%d\n",i,y,x);
				return 0;
			}
			if ( y == 7)
			{
				 printf("_%d_dealer win && dice=%d\n",i,y);
				return 0;
			}
			i++;
		}
	}

}

int TwoDice()
{
	int a = rand()%6 + 1;
	int b = rand()% + 1;
	return a + b;
}



*************
typedef struct
{
        char w[50];
        int f;
}Word;

int Input(Word words[]);
void Bubble(Word words[], int m);
void Output(Word words[], int m);
int MyStrcmp(char s1[], char s2[]);

int main()
{
	Word words[1000];
	int i=0;
	for (i ;i< 1000; i++)
	{
		words[i].f = 0;
	}
	int m = Input(words);
	Bubble(words, m);
	Output(words, m);
	return 0;
}

int Input(Word words[])
{
	char s[100];
	scanf("%s", s);
	int m ;
	while (MyStrcmp(s,"xyz") != 0)
	{
		int flag = 0;
		int i;
		for (i = 0; i<m ; i++)
		{
			if(MyStrcmp(s,words[i].w)==0)
			{
				words[i].f++;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			strcpy(words[m].w , s);
			words[m].f++;
			m++;
		}
		scanf("%s",s);
	}
	return m;		
}

void Bubble(Word words[], int m)
{
	int i;
	for ( i =0; i < m; i++)
	{
		int j;
		for ( j = m-1; j>1; j--)
		{
			if (MyStrcmp(words[j].w, words[j-1].w)<0)
			{
				Word temp = words[j];
				words[j] = words[j-1];
				words[j-1] = temp;
			}
		}
	}
}

void Output(Word words[], int m)
{
	int i;
	for ( i =0; i <m ; i++)
	{
		printf("%s freq=%d\n",words[i].w, words[i].f);
	}
}

int MyStrcmp(char s1[], char s2[])
{
	int i =0;
	while (s1[i] == s2[i] && s1[i] !=0 && s2[i] !=0)
	{
		i++;
	}
	return s1[i] - s2[i];
}



***********
int LsPalindrome(int n);

int main()
{
	int x;
	scanf("%d", &x);
	if(LsPalindrome(x))
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}

int LsPalindrome(int n)
{
	int k,m = 0;
	k = n;
	while(k!=0)
	{
		m = m * 10 + k % 10;
		k = k/10;
	}
	return m == n;
}


***************
char cfunc(int i)
{
	if(i == 0)
		return 'a';
	if(i == 1)
		return 'g';
	else
		return 'N';
}

int main()
{
	printf("type an integer:");
	int val;
	scanf("%d", &val);
	char c = cfunc(val);
	printf("%c\n",c);

	return 0;
}


**********
void swap(int a[]);
int main()
{
	int a[3]={1,2,3};
	printf("before exchange: a[0]=%d a[1]=%d\n",a[0], a[1]);
	swap(a);
	printf("after exchange: a[0]=%d a[1]=%d\n",a[0], a[1]);
	
	return 0;
}

void swap(int a[])
{
	int tmp;
	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
}

********

void swap(int x, int y);
int main()
{
	int a = 2, b = 3;
	printf("before exchange: a=%d b=%d\n",a ,b);
	swap(a, b);
	printf("after exchange: a=%d b=%d\n",a ,b);
	return 0;
}
void swap(int x, int y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;	
}




/	printf("input a number:\n");
	int n ;
	scanf("%d",&n);
	printf("n! = %d\n",fac(n));


int fac(int n)
{
	if (n == 0)
		return 1;
	else
		return n * fac(n - 1);
}

/	char name[]="abcd\0";
	printf("please input your name:\n");
	gets(name);
	printf("your name:%s\n",name);
	
	len = mystrlen(name);
	printf("the length of your name is:%d\n",mystrlen(name));

int mystrlen(char string[])
{
	int len = 0;
	while (string[len] != '\0') 
		len=+1;
	return len;	
}


	char name1[5], name2[5];
	printf("please input a name with blank(within 4 characters):\n");
	gets(name1);
	printf("please input the name again\n");
	scanf("%s", name2);
	printf("using function gets,the name storing in the variable is:%s\n",name1);
	printf("using function scanf,the name storing in the variable is:%s\n",name2);
	return 0;
}


int main()
{
	int a[7];
	int i,j;
	printf("please input an array with seven elements: \n");
	for (i = 0; i<7; i++) scanf("%d",&a[i]);
	int big = a[0];
	for (j = 0; j<7; j++)
		if (a[j]>big) big = a[j];
	printf("max=%d\n",big);
	return 0;
}

#define MAX 100
const int MIN =10; 

int main() 
{
	printf("MAX=%d\n", MAX);
	printf("MIN=%d\n", MIN);
	
	return 0;
}


int max(int x, int y);

int max(int x, int y)
{	
	int mx = x;
	if (x < y)
	{
		mx = y;
	}
	return mx;
}

int main() 
{
	int m,n;
	printf("input two value:");
	scanf("%d %d", &m, &n);
	int a = max( m, n);
	printf("the max = %d\n", a);
	
	return 0;
}
*/

