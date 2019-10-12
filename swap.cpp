#include<stdio.h>
main()
{
	float a,b,c=0;
	printf("Enter the first number :");
	scanf("%f", &a);
	printf("Enter the second number :");
	scanf("%f", &b);
	c=b;
	b=a;
	a=c;
	printf("New first number = %.2f \nNew second number = %.2f", a,b);
	
}
