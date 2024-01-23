#include<stdio.h>
int main()
{
	int a,b,c;
	printf("three sides: ");
	scanf("%d\n%d\n%d",&a,&b,&c);
	if(a+b>c||c+b>a||a+c>b)
	{
		printf("three sides of triangle");
	}
	else
	{
		printf("\n not sides of triangle");
	}
	return 0;
}
