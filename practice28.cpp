#include<stdio.h>
int main()
{
	int n,x=1,y=1,z=0,i;
	printf("enter the number");
	scanf("%d",&n);
	printf("%d %d",x,y);
	for(i=0;i<n-2;i++)
	{
		z= x+y;
		x=y;
		y=z; 
		printf("%d",z);
		
	
	}
	return 0;
	
}
