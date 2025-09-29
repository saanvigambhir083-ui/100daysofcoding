#include<stdio.h>
void main()
{   int n;
    printf("Enter a number:");
    scanf(" %d",&n);
    int temp=n;
    int sum=0;
    int f=1;
    while(temp!=0)
    {   f=1;
        int d= temp%10;
        temp=temp/10;
        for(int i=1; i<=d; i++)
        {
          f=f*i;
        }
        sum=sum+f;
    }
    if(sum==n)
    printf("Strong number");
    else
     printf("Not a strong number");
}