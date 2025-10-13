#include<stdio.h>
void main() 
{   
    long num;
    int count[10] = {0};  
    int digit, max = 0, result = 0;

    printf("Enter the number:");
    scanf("%ld", &num);

    while (num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++) 
    {
        if (count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("%d", result);
}