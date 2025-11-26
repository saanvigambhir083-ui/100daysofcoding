#include<stdio.h>
void main() 
{
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
      scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);
    if (k > n) 
    {
        printf("Invalid! k cannot be greater than n.");
        
    }
    else
    {
    int window_sum = 0;
    for (int i = 0; i < k; i++)
        window_sum += arr[i];
    int max_sum = window_sum;
    
    for (int i = k; i < n; i++) 
    {
        window_sum += arr[i] - arr[i - k]; 
        if (window_sum > max_sum)
        max_sum = window_sum;
    }
    printf("Maximum sum of any subarray of size %d is: %d\n", k, max_sum);
  }
}