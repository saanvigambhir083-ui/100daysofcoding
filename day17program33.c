#include<stdio.h>
#include<math.h>
void main()
{   int num;
    int s=0;int i=0;
    printf("Enter the no.:");
    scanf("%d",&num);
     int temp=num;
      while(temp!=0)
    {
        temp=temp/10;
        i++;
    }
    temp=num;
    while(num!=0)
    {
        int d=num%10;
        s=s+pow(d,i);
         num=num/10;
    }
    if(s==temp)
    printf("yes, armstrong");
    else
     printf("not armstrong");
}