#include<stdio.h>
void main() 
{
    char str[100];
    int count = 0;
    printf("Enter the string:");
    scanf("%s", str);
    while (str[count] != '\0') 
    {
        count++;
    }
    printf("no. of characters=%d", count);
}