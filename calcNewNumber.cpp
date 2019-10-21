//output of a new number
#include<stdio.h>
main()
{
	int n, d1, d2, d3, d4, d5, n2;
	printf("Enter a five digit number : ");
	scanf("%d", &n);
	
	d1 = n%10;
	n = n/10;
	d2 = n%10;
	n = n/10;
	d3 = n%10;
	n = n/10;
	d4 = n%10;
	d5 = n/10;
	
	n2 = (d1+1)+((d2+1)*10)+((d3+1)*100)+((d4+1)*1000)+((d5+1)*10000);
	printf("So the new number is = %d", n2);
	
}
