#include<stdio.h>
void main()
{   int n1, n2;
    printf("Enter the two numbers:");
    scanf(" %d %d",&n1, &n2);
    int lcm=0;
    for(int i=1; i<=n1*n2; i++)
    {
        if((n1*i)%n2==0)
        { lcm=i*n1;
        break;}
         
    }
    printf("LCM= %d",lcm);
}