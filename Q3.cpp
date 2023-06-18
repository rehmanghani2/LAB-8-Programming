/* 3.	Write a program to find the factorial of a number. */
#include <stdio.h>
int fact(int);
main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	int res=fact(n);
	printf("\nThe factorial of %d is %d",n,res);
}
int fact(int x)
{
	if(x>1)
	return x*fact(x-1);
	else 
	return 1;
}