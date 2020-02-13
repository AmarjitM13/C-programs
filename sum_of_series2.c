#include<stdio.h>
    
int main()
{
	int i,N;
	float sum;
	
	printf("Enter the value of N: ");
	scanf("%d",&N);
	
	sum=0.0f;
	
	for(i=1;i<=N;i++)
		sum = sum + ((float)1/(float)i);
	
	printf("Sum of the series is: %f\n",sum);
	
	return 0;
}
