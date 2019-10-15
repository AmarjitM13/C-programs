//temperature conversion from Fahrenhite to Centigrade Degree
#include<stdio.h>
main()
{
	float F, C; // F = Fahrenhite, C = Centigrade
	printf("Enter the temperature (in Degree Fahrenhite) : ");
	scanf("%f", &F);
	C = ((F-32)*5)/9;
	printf("So the temperature in Centigrade unit is = %.2f", C);
}
