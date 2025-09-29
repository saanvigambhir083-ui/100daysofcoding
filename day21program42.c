#include<stdio.h>
void main()
{ int n;
 printf("Enter the number:");
 scanf(" %d",&n);
 int sum=0;
 for(int i=1; i<n; i++)
 {
    if(n%i==0)
    sum= sum+i;
 }
 if(sum==n)
 printf("Perfect number");
 else 
 printf("Not a perfect number");
}