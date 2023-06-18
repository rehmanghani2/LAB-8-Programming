/*11.	Write a program in C to calculate the power of any number using recursion. */
#include <stdio.h>
int cal_power(int,int);  //declaration
main()
{
	int base,expo;
	printf("Enter base:");
	scanf("%d",&base);
	printf("Enter exponent or power:");
	scanf("%d",&expo);
	int res=cal_power(base,expo);  //call
	printf("The power of %d raising by %d is= %d",base,expo,res);
}
int cal_power(int x,int y)  //definition
{
	if(y>=1)
	{
	return x*cal_power(x,y-1);
    }
  else 
  return 1;
}
