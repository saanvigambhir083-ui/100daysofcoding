#include<stdio.h>
void main()
{  int d;
  printf("Enter the number of days:");
  scanf("%d",&d);
  int fine=0;
  if(d<=5)
  {
   fine= d*2;
   printf("Fine: %d",fine);
  }
  else if(d>5 && d<=10)
  {
   fine= 10+ 4*(d-5);
   printf("Fine: %d",fine);
  }
  else if(d>10 && d<=30)
  {
   fine= 30+ (d-10)*6; 
   printf("Fine: %d",fine);
  }
  else{
  printf("Membership cancelled");
  }
}