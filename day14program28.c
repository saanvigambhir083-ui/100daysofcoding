#include<stdio.h>
void main()
{   int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int prod=1;
    for (int i=2; i<=n; i=i+2)
    {
     prod=prod*i;
    }
    printf(" Product= %d",prod);
}