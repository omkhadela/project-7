// C program to find factorial of number using recursion.

#include<stdio.h>

fact(int a)
{
	if(a==0)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}
main()
{
	int a;
	printf("enter a :");
	scanf("%d",&a);
	printf("The facorial of this number is : %d",fact(a));
}
