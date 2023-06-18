/*10.	Write a program in C to find the LCM of two numbers using recursion.  */
#include <stdio.h>
int lcm(int ,int); //declaration
main()
{
	int n1,n2,numer,denom; //numer=numerator  denom=denominator
	int LCM;
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
	int res=lcm(numer,denom);  //call
	LCM=n1*n2/res;
	printf("\nThe LCM of %d and %d is %d ",n1,n2,LCM);
}
int lcm(int numer,int denom) //definition
{
	if(denom==0)
	{
		return numer;
	}
	else
	return lcm(denom,numer%denom);
}