#include<stdio.h>
#include<math.h>
void main()
{   double p, r,  t;
    printf("Enter principal amount:");
    scanf("%lf",&p);
    printf("Enter the rate of interest:");
    scanf("%lf",&r);
    printf("Enter the time:");
    scanf("%lf",&t);
    double si, ci, a;
    si=(p*r*t)/100.0;
    a=p*pow(1+(r/100.0),t);
    ci= a-p;
    printf("Simple interest= %lf\n",si);
    printf("compound interest= %lf\n",ci);
}