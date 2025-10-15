#include <stdio.h>
void main() 
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int first, second;
    first = second = -2147483648; // minimum possible int

    for(i = 0; i < n; i++) 
    {
        if(arr[i] > first) 
        {
            second = first;
            first = arr[i];
        } 
        else if(arr[i] > second && arr[i] < first) 
        {
            second = arr[i];
        }
    }

    if(second == -2147483648)
        printf("No second largest element.\n");
    else
        printf("Second largest :%d\n", second);

}