#include<stdio.h>
int min(int a ,int b)
{
	if(a>b)
	printf("%d",a);
	else
	printf("%d",b);
	
}
int main()
{
	int i,j;
	printf("enter the number: ");
	scanf("%d",&i);
	printf("enter the number: ");
	scanf("%d",&j);
	min(i,j);
	return 0;
}
