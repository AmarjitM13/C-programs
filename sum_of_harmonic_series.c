//Write a program to determine and print the sum of the following harmonic series for a given value of n: 1 + 1/2 + 1/3 + ..... + 1/n

#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	float sum, i=1;
	
	for(i; i<=n; i++){
		float t = 1/i;
		sum = sum + t;
	}
	
	printf("%f", sum);
	
	return 0;
}
