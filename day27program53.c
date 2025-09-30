#include<stdio.h>
void main()
{
  int i=1; int j=7;
  while(j!=-1)
  {
    if(i<=9)
    {
        for(int c=1; c<=i; c++)
        printf("*");
        printf("\n");
        i=i+2;
    }
    else 
    {
        for(int c=1; c<=j; c++)
        printf("*");
        printf("\n");
        j=j-2;
    }
  }
}