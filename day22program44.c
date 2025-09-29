#include<stdio.h>
int main()
{   int n;
    printf("Enter a number:");
    scanf(" %d",&n);
    float sum=0.0;
    for(int i=2; i<=n; i++)
    {   
        sum +=(float)((2*i)-1)/(2*i);
    }
    printf("Sum= %.1f", (1+sum));
    return 0;
}