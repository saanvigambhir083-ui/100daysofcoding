#include<stdio.h>
void main() 
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
	int arr[n];
    printf("Enter the elements(one missing):");
    for (int i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
	}
     for(int i = 0; i < n - 1; i++) 
    {
    for(int j = i + 1; j < n; j++) 
    {
      if(arr[j] < arr[i]) 
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
       }
      }
    }
    for(int i=0; i<=n; i++)
    {
        if(i!= arr[i])
        {
            printf("element is:%d",i);
        break;
        }
    }
}