#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("Enter a string:");
    fgets(str,100,stdin);
    int freq[26] = {0}; 
    for (int i = 0; str[i] != '\0'; i++) 
    {
        int index = str[i] - 'a';
        if (freq[index] == 1) 
        {
        printf("%c", str[i]);  
        return 0;    
        }
        freq[index]++;
    }
    printf("No repetition");
    return 0;
}
