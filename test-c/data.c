#include <stdio.h>


void PrintN(int N);

int main()
{
	int number;
	printf("Please input one integer:");
	scanf("%d",&number);
	PrintN(number);

	return 0;
}

void PrintN(int N)
{
	if(N) {
		PrintN(N - 1);
		printf("%d\n", N);
	}
	return ;
}
