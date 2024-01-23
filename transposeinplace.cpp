#include<stdio.h>
int main()
{
	 int n;
	 printf("enter the no. of rows and column: ");
	 scanf("%d",&n);
	 printf("enter all the elements of array: ");
	 int arr[n][n];
	 for(int i=0;i<n;i++)
	 {
	 	for(int j=0;j<n;j++)
	 	{
	 		scanf("%d",&arr[i][j]);
		 }
	 }
	 for(int i=0;i<n-1;i++)
	 {
	 	for(int j=i;j<n-1;j++)
	 	{
	 		int temp = arr[i][j];
	 		arr[i][j]=arr[j][i];
	 		arr[j][i]= temp;
		 }
	 }
	  for(int i=0;i<n;i++)
	 {
	 	for(int j=0;j<n;j++)
	 	{
	 		printf("%d\t",arr[i][j]);
		 }
		 printf("\n");
	 }
	 return 0;
	 
}
