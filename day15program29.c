#include<stdio.h>
void main()
{   int n;
    printf("Enter the number :");
    scanf("%d", &n);
    int f=1;
    for (int i=1; i<=n; i++)
    {
     f=f*i;
    }
    printf(" Factorial= %d",f);
}