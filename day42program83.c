#include<stdio.h>
void main() 
{
    char str[100];
    int count = 0; int v=0, c=0;
    printf("Enter the string:");
    scanf("%s", str);
    while (str[count] != '\0') 
    {   if(str[count]>='a'&& str[count]<='z' || str[count]>= 'A'&& str[count]<= 'Z')
         { if(str[count]== 'a'|| str[count]== 'e'||str[count]== 'i'||str[count]== 'o'
        ||str[count]== 'u'||str[count]== 'A'||str[count]== 'E'||str[count]== 'I'||str[count]== 'O'||str[count]== 'U')
        v++;
        else c++;
       } 
    count++;
  }
  printf("Vowels= %d consonants = %d", v, c);
}