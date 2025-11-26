#include<stdio.h>
void main()
{
int n,p=-1; 
 printf("Enter the number of elements of array:");
 scanf("%d",&n);
  int arr[n];
 printf("Enter elemnts of the array: ");
 for(int i=0;i<n;i++)
 {
	scanf("%d",&arr[i]);
 }
 int sum=0,left=0;
for(int i = 0; i < n; i++)
  sum += arr[i];

for(int i = 0; i < n; i++)
{
if(left == (sum - left - arr[i]))
{
 p = i;
 break;
}
left += arr[i];
}
if(p!=-1)
printf("Pivot index: %d",p);
else
printf("-1");
}