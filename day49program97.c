#include<stdio.h>
#include<string.h>
void main()
{    
    char s[100];
    printf("Enter a string:");
    fgets(s,100,stdin); 
    int l= strlen(s)-1;
    for(int i=0;i<l; i++)
    {
     if(s[i]==' ')
     printf("%c .", s[i+1]);
     else if(i==0)
     printf("%c .", s[0]);
     else 
     continue;
    }
}