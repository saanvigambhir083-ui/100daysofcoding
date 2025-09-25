#include<stdio.h>
void main()
{   int n;
    printf("Enter the number:");
    scanf(" %d",&n);
    int c=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    printf("yes the number is prime");
    else
    printf("no the number is not prime");
}