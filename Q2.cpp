/* 2.	Write a program in C to calculate the sum of numbers from 1 to n using recursion. */
#include <stdio.h>
int n_sum(int );
main()
{
	int n;
	printf("Enter any n number:");
	scanf("%d",&n);
	int res=n_sum(n);
	printf("\nThe sum of 1 to %d is %d",n,res);
}
int n_sum(int n)
{
	if(n>1)
	{
	return n + n_sum(n-1);
}
		return 1;
}