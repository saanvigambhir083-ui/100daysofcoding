#include<stdio.h>
#include<math.h>
void main()
{    double a, b,c;
 printf("Enter three numbers:");
 scanf("%lf %lf %lf",&a,&b,&c);
 double d=b*b -4*a*c;
 if(d<0)
 printf("Roots are complex:");
 else if(d==0)
 printf("Roots are real and same:");
 else
 printf("roots are real and different:");
double r1= (-b+sqrt(d))/(2.0*a);
double r2= (-b-sqrt(d))/(2.0*a);
printf(" %lf  %lf",r1,r2);
}