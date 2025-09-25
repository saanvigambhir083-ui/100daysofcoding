#include<stdio.h>
void main()
{ int n;
 printf("Enter the number:");
 scanf(" %d",&n);
 int bi[16]; int i=0;
 while(n!=0)
 { 
    bi[i]=n%2; i++;
    n=n/2;
 }
 printf("Binary equivalent=");
for(int j=i-1; j>=0; j--)
printf("%d",bi[j]);
}