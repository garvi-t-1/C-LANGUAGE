 #include<stdio.h>
 int main()
 {
 	int arr[5];
 	for(int i=0;i<=4;i++)
 	{
 		int n;
 		printf("enter the number%d:",i+1);
 		scanf("%d",&n);
 		arr[i]=n;
	 }
	 for(int i=4;i>=0;i--)
	 {
	 	printf("%d",arr[i]);
	 }
	 
	 return 0;
 }
