#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter number of elements in your array:");
	scanf("%d",&n);
	int arr[n];
    printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&arr[i]);
	}
	int currmax=arr[0];
    int glomax=arr[0]; 
    for(i=1;i<n;i++) 
    {
        if(currmax<0)
		{
            currmax=arr[i];
        } 
        else
		{
            currmax+=arr[i];
        }
        if(currmax>glomax)
		{
            glomax=currmax;
        }
    }
printf("Maximum contiguous subarray sum: %d",glomax);
}