#include<stdio.h>
int main()
{
	int i,j;
	printf("cost price= ");
	scanf("%d",&i);
	printf("selling price= ");
	scanf("%d",&j);
	int k=j-i;
	int l=i-j;
	
	if(j>i)
	{
		printf("profit of %d",k);
	}
	if(i==j)
	{
		printf("no profit no loss");
	}
	
	else
	{
		printf("loss of %d",l);
	}
	return 0;
	
}
