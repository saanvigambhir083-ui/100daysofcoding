#include<stdio.h>
void main()
{
int n,i;
printf("Enter the number of elements of array: ");
scanf("%d",&n);
int nums[n];
printf("Enter elements:");
for(i=0;i<n;i++)
{
	scanf("%d",&nums[i]);
}	
int answer[n];
int prefix=1;   
for (int i=0;i<n;i++) 
{
    answer[i]=prefix;
    prefix=prefix*nums[i];
}
int suffix=1;
for (int i=n-1;i>=0;i--) 
{
    answer[i]=answer[i]*suffix;
    suffix=suffix*nums[i];
}
printf("The product array is: ");
for (int i=0;i<n;i++) 
{
    printf("%d ",answer[i]);
 }
}