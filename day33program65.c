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
  printf("Enter the number to be found:");
  scanf("%d",&v);
  int u= n-1; int l=0;\
  int mid=0; int f=0;
  while(l<u)
  {
   mid= (l+u)/2;
   if(v>a[mid])
   l=mid+1;
   else if(v<a[mid])
   u= mid-1;
   else
   {f=1;
   break;}
  }
  if(f==1)
  printf("Found at index %d", mid);
  else 
   printf("-1");
}