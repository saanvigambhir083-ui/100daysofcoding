#include<stdio.h>
void main()
{    int l; int b;
    printf("Enter the length:");
    scanf("%d",&l);
    printf("Enter the breath:");
     scanf("%d",&b);
     int perimeter; int area;
     perimeter= 2*(l+b);
     area= l*b;
    printf("perimeter= %d \n",perimeter);
    printf("area= %d",area);
}