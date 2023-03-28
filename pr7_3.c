// C program to find Length of the String by passing String / Character Array as an Argument using User Define Functions.

#include<stdio.h>

sum(char a[])
{
	int L;
	printf("Enter the string : ");gets(a);
	L=strlen(a);
	return L;
}
main()
{
	int L;
	char a[50];
	L=sum(a);
	printf("The length of string is : %d",L);
}

