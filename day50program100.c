#include <stdio.h>
#include <string.h>
void main() 
{
    char s[100];
    printf("Enter a string: ");
    fgets(s, 100, stdin);
    int n = strlen(s)-1;
    for(int i=0;i<n;i++) 
    {
        for(int j=i; j<n;j++) 
        {
            for(int k=i;k<=j;k++) 
            {
                printf("%c", s[k]);
            }
            if(!(i == n-1 && j == n-1))
                printf(",");
        }
    }
}