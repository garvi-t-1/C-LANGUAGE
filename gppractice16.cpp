#include<stdio.h>
int main()
{
	int n;
	printf("enter: ");
	scanf("%d",&n);
	float b=100.0;
	for(int i=1;i<=n;i++)
	{
		if(b>0){
		
		printf("\n%.1f",b);
		b=b*0.5;
	}
		
	}
	return 0;
}
