#include<stdio.h>
void main() 
{
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:");
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);
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

    if(k > 0 && k <= n)
    printf("%d", arr[k - 1]);
    else
    printf("Invalid k");
}
