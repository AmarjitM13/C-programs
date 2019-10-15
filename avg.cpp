#include<stdio.h>
main()
{
	float sub1, sub2, sub3, sub4, sub5, avg, p;
	printf("Enter the marks of sub1 :");
	scanf("%f",&sub1);
	printf("Enter the marks of sub2 :");
	scanf("%f",&sub2);
	printf("Enter the marks of sub3 :");
	scanf("%f",&sub3);
	printf("Enter the marks of sub4 :");
	scanf("%f",&sub4);
	printf("Enter the marks of sub5 :");
	scanf("%f",&sub5);
	avg = (sub1+sub2+sub3+sub4+sub5)/5;
	p = (sub1+sub2+sub3+sub4+sub5)/500*100;
	printf("The average number is : %f\nThe percentage is : %f", avg,p);
	
}
