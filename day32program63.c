#include<stdio.h>
void main()
{ int n1;
  printf("Enter the no. of elements of 1st array:");
  scanf(" %d", &n1);
  int a[n1];
  printf("Enter the elements of array:");
  for(int i=0; i<n1; i++)
  {
   scanf("%d", &a[i]);
  }
  int n2;
  printf("Enter the no. of elements of 2nd array:");
  scanf(" %d", &n2);
  int b[n2];
  printf("Enter the elements of array:");
  for(int i=0; i<n2; i++)
  {
   scanf("%d", &b[i]);
  }
  int c[n1+n2]; int j=0;
  for(int i=0; i<n1+n2; i++)
  {
   if(i<n1)
   c[i]=a[i];
   else 
   { c[i]= b[j];
    j++;
   }
  }
  for(int i=0; i<n1+n2; i++)
  {
   printf(" %d", c[i]);
  }
}