#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n, sum, finalSum = 0, i, j;
    scanf ("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sum = 0;
        for(j = 1; j <= i; j++)
        {
            sum += j;
        }
        finalSum += sum;
    }
    printf("Sum : %d\n",finalSum);
    return 0;
}
