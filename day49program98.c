#include<stdio.h>
#include<string.h>
void main()
{    
    char s[100];
    printf("Enter a string:");
    fgets(s,100,stdin); 
    int l= strlen(s)-1; 
    int ls=0;
    for (int i=0; i<l; i++) 
    {
        if (s[i] == ' ')
            ls= i;
    }
    for(int i=0;i<ls; i++)
    {
     if(s[i]==' ')
     {
     printf("%c .", s[i+1]);
    }
     else if(i==0)
     printf("%c .", s[0]);
     else 
     continue;
    }
    for(int i=ls; i<=l;i++)
    printf("%c", s[i]);
}