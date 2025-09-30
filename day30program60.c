#include<stdio.h>
void main()
{  int n;
  printf("Enter the no. of elements of array:");
  scanf(" %d", &n);
  int num[n]; int p=0, neg=0,z=0;
  printf("Enter the elements of array:");
  for(int i=0; i<n; i++)
  {
   scanf("%d", &num[i]);
  }
   for(int i=0; i<n; i++)
  {
   if(num[i]<0)
   neg++;
   if(num[i]==0)
   z++;
   if(num[i]>0)
   p++;
  }
  printf("Positive integers = %d\n",p);
  printf("Negative integers= %d\n",neg);
  printf("Number of zeros= %d",z);
}