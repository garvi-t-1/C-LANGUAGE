#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		if(i%2!=0)
		sum=sum+i;
		else
		sum = sum-i;
	}
	printf("sum=%d",sum);
	return 0;
}
