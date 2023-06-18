/*7.	Write a program to convert decimal to binary using recursion */
#include <stdio.h>
void dec_to_bin(int); //declaration
main()
{
	int n;
	printf("Enter any decimal number:");
	scanf("%d",&n);
	printf("The decimal number convert to\n");
	printf("\n%d=",n);
	dec_to_bin(n);
}
void dec_to_bin(int x)
{
	if(x>0)
	{
	dec_to_bin(x/2);
	printf("%d",x%2);  	
	}	
}