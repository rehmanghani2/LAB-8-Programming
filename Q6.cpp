/* 6.	Write a program in C to find GCD of two numbers using recursion */
#include <stdio.h>
int gcd(int ,int); //declaration
main()
{
	int n1,n2,numer,denom; //numer=numerator  denom=denominator
	printf("Enter any two numbers:\n");
	scanf("%d %d",&n1,&n2);
	if(n1>n2)
	{
		numer=n1;
		denom=n2;
	}
	else
	{
		numer=n2;
		denom=n1;
	}
	int res=gcd(numer,denom);  //call
	printf("\nThe GCD of %d and %d is %d ",n1,n2,res);
}
int gcd(int numer,int denom) //definition
{
	if(denom==0)
	{
		return numer;
	}
	else
	return gcd(denom,numer%denom);
}