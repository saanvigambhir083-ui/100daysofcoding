#include<stdio.h>
void main()
{  int n;
  printf("Enter the no. of elements of array:");
  scanf(" %d", &n);
  int num[n]; 
  printf("Enter the elements of array:");
  for(int i=0; i<n; i++)
  {
   scanf("%d", &num[i]);
  }
  int min=num[0]; int max=num[0];
   for(int i=0; i<n; i++)
  {
   if(num[i]<min)
   min= num[i];
   if(num[i]>max)
   max= num[i];
  }
  printf("Min= %d\n", min);
  printf("Max= %d", max);
}