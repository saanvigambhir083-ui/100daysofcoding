#include <stdio.h>
void main() 
{
    char str[100]; char c; int f=0;
    printf("Enter a string: ");
    fgets(str,100,stdin);
    printf("Enter a character: ");
    scanf("%c", &c);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == c)
        f++;
    }
    printf("frequency= %d", f);
}