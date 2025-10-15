#include<stdio.h>
void main()
{
    int n;
  printf("Enter the no. of elements of array:");
  scanf(" %d", &n);
  int a[n+1];
  printf("Enter the elements of array:");
  for(int i=0; i<n; i++)
  {
   scanf("%d", &a[i]);
  }
  int v;
  printf("Enter the number to be inserted:");
  scanf("%d",&v);
  int i=n;
  while(v<a[i])
  {
   a[i+1]=a[i];
   i--;
  }
  a[i+1]=v;
  for(int i=0; i<n+1; i++)
  {
   printf("%d  ", a[i]);
  }
}