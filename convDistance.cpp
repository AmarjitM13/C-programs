#include<stdio.h>
main()
{
	float km, mtr, ft, inch, cm;
	printf("Enter the distance in Kilometer :");
	scanf("%f", &km);
	mtr = 1000*km;
	ft = 3280.8399*km;
	inch = 39370.079*km;
	cm = 10e4*km;
	printf("mtr =%.2f \nft =%.2f \ninch =%.2f \ncm =%.2f", mtr, ft, inch,cm);
}
