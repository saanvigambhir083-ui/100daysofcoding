#include<stdio.h>
void main()
{    int units;
    printf("Enter the number of units consumed:");
    scanf("%d",&units);
    int bill=0;
  if(units<=100)
  {
   bill= units*5;
   printf("Bill: %d",bill);
  }
  else if(units>100 && units<=200)
  {
   bill= 500+ 7*(units-100);
   printf("Bill: %d",bill);
  }
  else if(units>200 && units<=300)
  {
   bill= 1200+ (units-200)*10; 
   printf("Bill: %d",bill);
  }
  else
  {
    bill= 2200+ (units-300)*12; 
    printf("Bill: %d",bill);
  }
}