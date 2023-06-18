/*1.	Write a program in C to print first n numbers using recursion. */
#include <stdio.h>
void n_nums(int);
main()
{
	int n;
	printf("Enter any n number:");
	scanf("%d",&n);
	n_nums(n);
}
void n_nums(int n)
{
	if(n>1)
	n_nums(n-1);
	printf("%d ",n);
}
