//Sum Of Digits
#include<stdio.h>
main()
{
	int n,d1,d2,d3,d4,d5,reverse; // n = number; d5,d4,d3,d2,d1 = the 1st,2nd,3rd,4th,5th digits of the number from the left respectively; reveerse = reverse of the number
	
	printf("Enter a five digit number : ");
	scanf("%d",&n);
	
	d1 = n%10;
	n = n/10;
	d2 = n%10;
	n = n/10;
	d3 = n%10;
	n = n/10;
	d4 = n%10;
	d5 = n/10;
	
	reverse = d5+(d4*10)+(d3*100)+(d2*1000)+(d1*10000);
	printf("The Reverse of the nyumber is = %d",reverse);
	 
}
