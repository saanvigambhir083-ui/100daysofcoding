#include<stdio.h>
void main()
{
int n,i,x,res;
int found=0;
 printf("Enetr the number of elements in the array:");
 scanf("%d",&n);
 printf("Enter sorted array: ");
 int arr[n];
 for(i=0;i<n;i++)
 {
	scanf("%d",&arr[i]);
 }
 printf("Enter the elment to search:");
 scanf("%d",&x);
 for(i=0;i<n;i++)
 {
    if(arr[i]>=x)
	{
      printf("index of element greater than x is %d",i);
	  found=1;
	  break;
	}
 }
 if(found==0)
 {
	printf("-1:not found ");
 }
}