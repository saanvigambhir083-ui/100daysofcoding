#include<stdio.h>
void main()
{   int a; int b; int temp;
    printf("Enter the two no.s:");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("before swap\n");
    printf("%d %d\n",a,b);
    temp=a; a=b; b=temp;
    printf("After swap\n");
    printf("%d %d",a,b);
}





