#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];  char t[100];
    printf("Enter 1st string:");
    fgets(a,100,stdin);
    printf("Enter 2nd string:");
    fgets(t,100,stdin);  
    int r= strlen(a); 
    int f=0;
    for(int i=1; i<=r-2; i++)
    {    int temp= a[r-2];
        for(int j=r-2; j>0; j--)
        {
         a[j]=a[j-1];
        }
        a[0]=temp;
        if(strcmp(a, t) == 0)
        {
         f=1; break;
        }
    }
        if(f==1)
        printf("Is rotation");
        else 
        printf("Not rotation");
}