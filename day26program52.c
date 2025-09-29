#include<stdio.h>
void main()
{
  int i=1; int j=3;
  while(j!=-1)
  {
    if(i<=5)
    {
        for(int c=1; c<=i; c++)
        printf("*\n");
        printf("\n");
        i=i+2;
    }
    else 
    {
        for(int c=1; c<=j; c++)
        printf("*\n");
        printf("\n");
        j=j-2;
    }
  }
}