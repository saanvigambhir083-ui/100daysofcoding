#include<stdio.h>
void main()
{
int n,i,target,res;
 printf("Enter the number of elements of array:");
 scanf("%d",&n);
 printf("Enter sorted array: ");
 int nums[n];
 for(i=0;i<n;i++)
 {
	scanf("%d",&nums[i]);
 }
 printf("Enetr the element to search:");
 scanf("%d",&target);
    int first=-1,last=-1,start=0,end=n-1;

    while (start<=end) 
    {
        int mid=(start+end)/2;
        if(nums[mid]==target) 
        {
            first=mid;
            end=mid-1;  
        } 
        else if(nums[mid]<target) 
        {
            start=mid+1;
        } 
        else
        {
            end=mid-1;
        }
    }
    start=0,end=n-1;
    while (start<=end) 
    {
    int mid=(start+end)/2;
    if (nums[mid]==target) 
    {
        last=mid;
        start=mid+1;
    } 
    else if (nums[mid]<target) 
    {
        start=mid+1;
    } 
    else 
    {
            end=mid-1;
    }
}

 if (first==-1)
    printf("-1,-1\n");
    else
    printf("First occurrence is at =%d\nLast occurrence is at =%d\n", first, last);
}