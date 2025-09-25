#include<stdio.h>
void main()
{    double r; double pi= 3.14;
    printf("Enter the radius:");
    scanf("%lf",&r);
    double circumfrence; double area;
     circumfrence= 2*pi*r;
     area= pi*r*r;
    printf("perimeter= %.2lf \n",circumfrence);
    printf("area= %.2lf",area);
}