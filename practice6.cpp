#include<stdio.h>
int main()
{
	int l,b;
	printf("enter len: ");
	scanf("%d",&l);
	printf("enter breadth:");
	scanf("%d",&b);
	int A=l*b;
	int P=2*(l+b);
	printf("area=%d",A);
	printf("perimeter =%d",P);
	if(A>P)
	{
		printf("area is greater than perimeter");
		
	}
	else
	{
		printf("perimenter is grater than area");
	}
	
	
	
return 0;
}
