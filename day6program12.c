#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<0)
    printf("number is negative");
    else  if(n>0)
    printf("number is positive");
    else
    printf("number is 0");
}