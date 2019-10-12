#include<stdio.h>
main()
{
	int bs,ha,da,gs;
	printf("Enter the Basic Salary :");
	scanf("%d",&bs);
	ha = bs*20/100;
	da = bs*40/100;
	gs = ha+da+gs;
	printf("So the Gross Salary is %d", gs);
}
