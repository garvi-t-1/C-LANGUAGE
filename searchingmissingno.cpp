#include<stdio.h>
int me(int arr[],int size)//me==missing element
{
int es=(10*11)/2;//expected sum
int as=0;//actual sum
for(int i=0; i<size;i++)
{
	as += arr[i];
}
int missingElement=es-as;
return missingElement;
}
int main()
{
	int arr[9];
	printf("enter 10 number(from1to 10 with one missing):\n");
	for(int i=0;i<9;i++)
	{
		scanf("%d",&arr[i]);
	}
	int missingElement =me(arr,9);
	printf("the missing element is:%d\n",missingElement);
	return 0;
}
