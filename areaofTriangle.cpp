//area of a triangle
#include<stdio.h>
#include<math.h>
main()
{
	float s1,s2,s3,sp,p, area;
	printf("enter the length of first side : ");
	scanf("%f", &s1);
	printf("enter the length of second side : ");
	scanf("%f", &s2);
	printf("enter the length o third side : ");
	scanf("%f", &s3);
	
	p = (s1+s2+s3);
	sp = p/2;
	
	area = sqrt(sp*(sp-s1)*(sp-s2)*(sp-s3));
	
	printf("So the area will be : %f", area);
	
}
