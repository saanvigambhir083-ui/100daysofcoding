#include<stdio.h>
void main()
{  int n;
  printf("Enter the no. of elements of array:");
  scanf(" %d", &n);
  int num[n]; int e=0, o=0;
  printf("Enter the elements of array:");
  for(int i=0; i<n; i++)
  {
   scanf("%d", &num[i]);
  }
   for(int i=0; i<n; i++)
  {
   if(num[i]%2==0)
   e++;
   else o++;
  }
  printf("Even number of elements= %d\n", e);
  printf("Odd number of elements= %d", o);
}