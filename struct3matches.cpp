#include<stdio.h>
#include<string.h>
int main()
{
	typedef struct cricketer
	{
		char name[15];
		int age;
		int noofmatches;
		float average;
	}cricketers;
	cricketer arr[3];
	for(int i=0;i<3;i++)
	{
		printf("enter name:");
		scanf("%s",arr[i].name);
		printf("enter age:");
		scanf("%d",&arr[i].age);
		printf("ente number of matches:");
		scanf("%d",&arr[i].noofmatches);
		printf("enter average: ");
		scanf("%f",&arr[i].average);
	}
		for(int i=0;i<3;i++)
	{
		printf("details of cricketer%d:\n",i+1);
		printf("name: %s",arr[i].name);
		printf("age: %d",&arr[i].age);
		printf("number of matches:%d",&arr[i].noofmatches);
		printf("average:%f",&arr[i].average);
	}
	return 0;
}
