#include<stdio.h>

int main()

{
	double p, q;
	scanf("%lf, %lf", &p, &q);
	int n;
	scanf("%d", &n);
	double w = (q-p)/n;
	double area = 0;
	int i;
	for (i=0; i<n; i++)
	
	{
		area = area + w*1/(p+i*w) ;
	}
	
	printf("%lf", &area);
	
	return 0;
}
