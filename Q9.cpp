/*9.	Write a program in C to check a number is a prime number or not using recursion.  */
#include <stdio.h>
int check_prime(int ,int ); //declaration
main()
{
	int n,factors;
	printf("Enter any number:");
	scanf("%d",&n);
	factors=check_prime(n,n); //call
	if(factors==2)
	printf("\n%d is prime",n);
	else if(factors>2)
	printf("\n%d is not prime",n);	
}
int check_prime(int n,int r) //definition
{
	if(r==1)  //base case
	return 1;
	else if(n%r==0)
	return 1+check_prime(n,r-1);
	else
	return check_prime(n,r-1);
}