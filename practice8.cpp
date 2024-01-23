#include<stdio.h>
int main()
{
	int i,j,k;
	scanf("%d\n%d\n%d",&i,&j,&k);
	if(i>j&&i>k)
	{
		printf("%d",i);
	}
	if(j>i&&j>k)
	{
		printf("%d",j);
	}
	if(k>i&&k>j)
	{
		printf("%d",k);
	}

	
	
	return 0;
}

