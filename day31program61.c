#include<stdio.h>
void main()
{
    int n;
  printf("Enter the no. of elements of array:");
  scanf(" %d", &n);
  int num[n];
  printf("Enter the elements of array:");
  for(int i=0; i<n; i++)
  {
   scanf("%d", &num[i]);
  }
  int s;
  printf("Enter the search no.:");
  scanf(" %d", &s);
  int f=0; int i;
   for( i=0; i<n; i++)
  {
   if(num[i]==s)
   { f=1; break;}  
   else { f=0;}
  }
  if(f==1)
  printf("Number found at index number %d.",i);
  else printf("-1");
}