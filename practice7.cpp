#include<stdio.h>
int main()
{
	int i;
	printf("enter a number: ");
	scanf("%d",&i);
	if(i%5==0&& i%3==0)
	{
		printf(" number is divisible by 3 and 5");
	}
	else
	{
		printf("not divisible");
	}
	
}

