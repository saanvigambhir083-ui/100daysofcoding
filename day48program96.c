#include<stdio.h>
#include<string.h>
void reverseWord(char *start, char *end) 
{
    while(start < end) 
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void main() {
    char s[200];
    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    int i = 0;
    while(i < len-1) 
    {
        while(i<len-1 && s[i]==' ')  
        i++;
        int start = i;
        while(i<len-1 && s[i]!=' ')
        i++;
        reverseWord(&s[start], &s[i-1]);
    }

    printf("Output: %s", s);
}