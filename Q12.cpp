/*12.	Enter a number and find its hailstone sequence using recursion. Hailstone
 sequence is attained by rule the If the current number is even, divide it by two; 
 else if it is odd, multiply it by three and add one. Repeat process until you reach 1.
Examples
n=3; 10, 5, 16, 8, 4, 2, 1, 4, 2, 1, ... 
n=4; 2, 1, 4, 2, 1, ... 
n=5; 16, 8, 4, 2, 1, 4, 2, 1, ... 
n=6; 3, 10, 5, 16, 8, 4, 2, 1, 4, 2, 1, ... 
n=7; 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1, 4, 2, 1
 */
 #include <stdio.h>    
 int hailstone_seq(int); //declaration
 main()
 {
 	int n;
 	printf("Enter any n number:");
 	scanf("%d",&n);
 	if(n<0){   // for positive numbers n
 	printf("Please Enter positive number:");
 	return 0;
    }
    printf("The hailstone sequence is:\n");
 	hailstone_seq(n); // function call
 }
 int hailstone_seq(int x) // definition
 {
 	printf("%d,",x);
 	if(x==1) // base case
	return x;
 	if(x%2==0)
 	return hailstone_seq(x/2);	  // function call for even	num
	else
 	return hailstone_seq(3*x+1);  // function call for odd num
 }