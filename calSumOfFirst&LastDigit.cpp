//Sum of 1st and last digit
#include<stdio.h>
main()
{
	int n, d1, d2, sum;
	
	printf("Enter a four digit number : ");
	scanf("%d", &n);
	
	d1 = n/1000;
	d2 = n%10;
	
	sum = d1 + d2;
	printf("The sum of the first and last digit is = %d", sum);
	
}
