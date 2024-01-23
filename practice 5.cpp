#include<stdio.h>
int main()
{
	int i,j;
	printf("cost price= ");
	scanf("%d",&i);
	printf("selling price= ");
	scanf("%d",&j);
	int k=i-j;
	int l=j-i;
	
	if(i>j)
	{
		printf("profit of %d",k);
	}
	else
	{
		printf("loss of %d",l);
	}
	return 0;
	
}
