/*5.	Write a program in C to sum the digits of a given number using recursion. */
#include <stdio.h>
int sum_dig(int); //declaration
main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	int res=sum_dig(n);
	printf("The sum of %d digits==%d",n,res);
}
int sum_dig(int x)
{
	if(x>1)
	{
		int dig=x%10;
		return dig+sum_dig(x/10);
	}
	else
	return 0;
}