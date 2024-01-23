#include<stdio.h>
int main()
{
	int marks[5],n;
	for(int i=0;i<5;i++)
	{
		printf("enter the  marks of the student %d : ",i+1);
		scanf("%d",&n);
		marks[i]=n;
		if(marks[i]<35){
				printf("%d",i);
			
		}
	
	}
	

	return 0;
	
}
