#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];  int strc=0, endc=0, strl=0, endl=0 ;
    printf("Enter a string:");
    fgets(s,100,stdin); 
    int current=0; int longest=0;
    for(int i = 0; s[i] != '\0'; i++)
    { 
     if(s[i]==' ')
     { endc= i-1;
      if(current>longest)
      { longest= current;
       strl=strc;
       endl=endc;
      } 
      endc=0;
      strc=i+1;
      current=0;
     }
     else
     {
      current++;
     }
    }
    if(current>longest)
    {
        longest= current;
        strl=strc;
        endl=strlen(s)-2;
    }
    for(int i=strl; i<=endl; i++)
    printf("%c", s[i]); 

}
