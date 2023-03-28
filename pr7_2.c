//C program to find Sum of all Array Elements by passing array as an argument using User Define Functions.

#include<stdio.h>

arsum(int a[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
main()
{
	int i,n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the array element a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("The sum of the array is : %d",arsum(a,n));
}
