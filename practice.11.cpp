#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<=n;i+=2)
	{
		printf("\n%d",i);
	}
	return 0;
}
