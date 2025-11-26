#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the number of elements of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n;i++) 
    {
	int nextg=-1;
    for (int j=i+1;j<n;j++)
    {
      if (arr[j]>arr[i]) 
      {
        nextg=arr[j];
        break;
        }
    }
        printf("%d ",nextg);
    }
   
}