/*4.	Write a program in C to Print Fibonacci Series using recursion. */
#include <stdio.h>
int fibonacci(int x,int n1=0,int n2=1) //default perimeters
{
	if(x==0)
	return n1;
	else
	{
	printf("%d ",n1);
	return fibonacci(--x,n2,n1+n2);
}
}
main()
{
	int n;
	printf("Enter n number of terms:");
	scanf("%d",&n);
	int res=fibonacci(n);
}
