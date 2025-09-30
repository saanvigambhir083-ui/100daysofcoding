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
   for(int i=n-1; i>=0; i--)
  {
   printf("%d  ", num[i]);
  }
}