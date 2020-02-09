#include<stdio.h>

int main()
{
	int num, r;
	printf("Enter the number: ");
	scanf("%d", &num);
	r = num % 2;
	
	if(r == 0)
	printf("The Number is Even");
	else
	printf("The Number is Odd");
	
	
	return 0;
}
