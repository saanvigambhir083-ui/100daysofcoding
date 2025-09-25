#include<stdio.h>
void main()
{    int num1; int num2;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
     int sum;
     sum= num1+num2;
    printf("sum= %d \n",sum);
     int diff;
     diff=num1-num2;
    printf("difference= %d \n",diff);
     int product;
     product= num1*num2;
    printf("product= %d \n",product);
     int quo;
     if(num2!=0)
     quo=num1/num2;
    printf("Quotient= %d \n",quo);
    
}