#include<stdio.h>
void main()
{   int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int sum=0;
    for (int i=1; i<=2*n; i=i+2)
    {
     sum=sum+i;
    }
    printf(" sum= %d",sum);
}