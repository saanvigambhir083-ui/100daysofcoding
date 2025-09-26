#include<stdio.h>
void main()
{   int n;
    printf("Enter the number:");
    scanf(" %d",&n);
    int sum=0;
    while(n!=0)
    {
      sum= sum+ n%10;
      n=n/10;
    }
    printf("Sum= %d", sum);
}