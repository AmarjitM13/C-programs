//Write a program that prints the even numbers from 1 to n

#include<stdio.h>

int main(){
	
	int i = 2, n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	printf("The even numbers between 1 and %d are: ", n);
	for(i; i<=n; i++){
		
		int r = i%2;
		
		if(r == 0){
			printf("%d ", i);
		}
		
	}
	
	return 0;
}
