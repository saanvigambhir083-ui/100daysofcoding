#include<stdio.h>
void main()
{
     int a; int b;
    printf("Enter the two no.s:");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("before swap\n");
    printf("%d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap\n");
    printf("%d %d\n",a,b);
}