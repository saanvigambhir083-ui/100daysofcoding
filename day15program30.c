#include<stdio.h>
void main()
{   int n;
    printf("Enter the number:");
    scanf("%d", &n);
     int rev=0;
     int d=0;
     while(n!=0)
     { d=n%10;
      n=n/10;
      rev= rev*10+d;
     }
    printf(" reversed number= %d",rev);
}