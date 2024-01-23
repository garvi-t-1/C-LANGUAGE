#include<stdio.h>
int main()
{
	int i;
	printf("enter the year: ");
	scanf("%d",&i);
	if(i%4==0)
	{
		printf("it is a leap year");
	}
	else if(i%100==0)
	{
		printf("it is a leap year");

		
	}
		else if(i%400==0)
	{
		printf("it is a leap year");

		
	}
	else{
		printf("not a leap year");
	}
	return 0;
	
}
