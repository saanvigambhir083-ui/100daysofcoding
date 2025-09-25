#include<stdio.h>
void main()
{    int t;
     printf("Enter the time in seconds:");
     scanf("%d",&t);
     int hours= t/3600;
     int min= t/60- hours*60;
     int sec= t- min*60- hours*3600;
     printf("time is :- %d:%d:%d\n",hours,min,sec);
}