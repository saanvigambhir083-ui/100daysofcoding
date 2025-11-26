#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array: ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int maj=-1;
    for (i=0;i<n;i++)
    {
        int count=0;
        for (j=0;j<n;j++)
        {
            if (arr[i]==arr[j])
                count++;
        }        
        if (count>n/2)
        {
            maj=arr[i];
            break;
        }
    }
  if (maj!=-1)
  printf("Majority element = %d",maj);
  else
  printf("-1");
}