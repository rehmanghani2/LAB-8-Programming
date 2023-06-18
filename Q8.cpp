/*8.	Write a program to reverse a number using recursion */
#include <stdio.h>
void reverse(int );
main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("The reverse of %d==",n);
	reverse(n);
}
void reverse(int x)
{
	if(x>0)
	{
		int rem=x%10;
		printf("%d",rem);
		reverse(x/10);
	}
	
}