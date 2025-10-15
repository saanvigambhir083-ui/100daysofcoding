#include<stdio.h>
void main()
{
    int n;
  printf("Enter the no. of elements of array:");
  scanf(" %d", &n);
  int a[n];
  printf("Enter the elements of array:");
  for(int i=0; i<n; i++)
  {
   scanf("%d", &a[i]);
  }
  int v;
  printf("Enter the index of the number to be deleted:");
  scanf("%d",&v);

  for(int j=v; j<n; j++)
  {
   a[j]=a[j+1];
  }
  for(int i=0; i<n-1; i++)
  {
   printf("%d  ", a[i]);
  }
}