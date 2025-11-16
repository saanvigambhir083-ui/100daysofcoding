#include<stdio.h>
#include<string.h>
void main() 
{
    char str[100];
    printf("Enter the string:");
    fgets(str, 100, stdin);
    int len=strlen(str);
    int s=0, d=0, sc=0;
    for(int i=0; i< len-1; i++)
    {  if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' )
       continue;
      else if(str[i]==' ')
      s++;
      else if(str[i]>='0' && str[i]<='9')
      d++;
      else
      sc++;
      
    }
    printf("no. of spaces=%d  ", s);
    printf("no. of digits=%d  ", d);
    printf("no. of special characters=%d  ", sc);
}