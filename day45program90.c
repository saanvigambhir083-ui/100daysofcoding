#include <stdio.h>
#include <ctype.h>
void main() 
{   printf("Enter a string:");
    char str[100];
    fgets(str,100,stdin);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (islower(str[i]))
        str[i] = toupper(str[i]);
        else if (isupper(str[i]))
        str[i] = tolower(str[i]);
    }
    printf("%s", str);
}