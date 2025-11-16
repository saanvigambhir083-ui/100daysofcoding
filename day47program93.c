#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main() 
{
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    printf("Enter first string: ");
    fgets(str1,100,stdin);
    printf("Enter second string: ");
    fgets(str2,100,stdin);
    int f=0;
    if (strlen(str1) != strlen(str2)) 
    {
        printf("Not anagrams");
    }
    else
    {
    for (int i = 0; str1[i] != '\0'; i++) 
    {
        freq1[tolower(str1[i])-'a']++;
        freq2[tolower(str2[i])-'a']++;
    }
    for (int i = 0; i <26; i++) 
    {
        if (freq1[i] != freq2[i]) 
        {
            f=1;
            break;
        }
    }
     if(f==0)
    printf("Strings are anagrams");
    else 
    printf("Not anagrams");
      }
}