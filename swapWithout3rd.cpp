#include<stdio.h>
main()
{
	float a,b;
	printf("Enter the first number :");
	scanf("%f", &a);
	printf("Enter the second number :");
	scanf("%f", &b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("New first number = %.2f \nNew second number = %.2f", a,b);
	
}
