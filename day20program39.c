#include<stdio.h>
void main()
{   int n;
    printf("Enter the number:");
    scanf(" %d",&n);
    int p=1;
    while(n!=0)
    {
        int d= n%10;
        n=n/10;
        if(d%2!=0)
        p=p*d;
    }
    printf("Product of odd digits of number is: %d",p);
}