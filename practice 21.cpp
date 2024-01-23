#include<stdio.h>
int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	int l=0,sum=0;
	while(n>0)
	{
		l=n%10;sum=sum+l;
		n=n/10;
		
	}
	printf("the total sum of digit is:%d ",sum);
	return 0;
}
