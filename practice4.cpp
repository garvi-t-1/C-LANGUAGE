#include<stdio.h>
int main()
{
	int i;
	printf("enter a num: ");
	scanf("%d",&i);
	if(i<0)
	{
		i=i*-1;
		
	}
	printf("the absolute value=%d",i);
}
