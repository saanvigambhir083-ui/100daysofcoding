#include<stdio.h>
int main()
{   int n;
    printf("Enter a number:");
    scanf(" %d",&n);
    float sum=0.0;
    for(int i=1; i<=n; i++)
    {   
        sum +=(float)(2*i)/(4*i-1);
    }
    printf("Sum= %.2f", sum);
    return 0;
}