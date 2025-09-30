#include<stdio.h>
void main()
{  
 int rows=7; 
 int c_row=(rows+1)/2;
 for(int i=1; i<= c_row; i++)
 {
    for(int j=1; j<= c_row-i; j++)
    printf(" ");
    for(int j=1; j<= 2*i-1; j++)
    printf("*");

    printf("\n");
 }
 for(int i=c_row-1; i>= 1; i--)
 {
    for(int j=1; j<= c_row-i; j++)
    printf(" ");
    for(int j=1; j<= 2*i-1; j++)
    printf("*");

    printf("\n");
 }

}