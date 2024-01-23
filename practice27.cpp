#include<stdio.h>
int main()
{
	int n,prod=1;
	printf("enter the number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		prod=prod*i;
		printf("the factorial is %d\n",prod);
	}
	printf("the factorial is %d",prod);
	
	return 0;
}
