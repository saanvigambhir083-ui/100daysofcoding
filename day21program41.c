#include<stdio.h>
void main()
{ int n;
 printf("Enter the number:");
 scanf(" %d",&n);
 int ar[16];
 int i=0;
while(n!=0)
{
 ar[i]=n%10; i++;
 n=n/10;
}
int temp= ar[0];
ar[0]= ar[i-1];
ar[i-1]= temp;
for(int j=i-1; j>=0; j--)
printf("%d",ar[j]);
}