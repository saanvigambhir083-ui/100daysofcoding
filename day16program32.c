#include<stdio.h>
void main()
{ int n;
 printf("Enter the number:");
 scanf(" %d",&n);
 int rev=0; int temp =n;
 int d=0;
 while(n!=0)
 { 
   d =n%10;
   rev=rev*10+d;
   n=n/10;
 }
 if(rev==temp)
 printf("yes palindrome");
 else 
 printf("not palindrome");
}