#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number whose table you want to print: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%dx%d=%d\n",n,i,n*i);
	}
	return 0;
}
