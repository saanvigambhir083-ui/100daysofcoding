#include<stdio.h>
void main()
{   int n1, n2;
    printf("Enter the two numbers:");
    scanf(" %d %d",&n1, &n2);
    int hcf=0;
    for(int i=1; i<=n1; i++)
    {
        if(n1%i==0 && n2%i==0)
         hcf=i;
    }
    printf("HCf= %d",hcf);
}