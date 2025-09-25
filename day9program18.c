#include<stdio.h>
void main()
{   double percent;
    printf("Enter the percentage:");
    scanf("%lf", &percent);
    if(percent<60)
    printf("Grade F");
    else if(percent>=60 && percent<70)
    printf("Grade D");
    else if(percent>=70 && percent<80)
    printf("Grade C");
    else if(percent>=80 && percent<90)
    printf("Grade B");
    else if(percent>=90 && percent<=100)
    printf("Grade A");
}