#include<stdio.h>
void main()
{
   int n; int f=0;  int s1=0,s2=0;
   printf("Enter n:");
   scanf("%d",&n);
   int x=0;
   for (x=1;x<=n;x++)
   {
      s1=0,s2=0;
    for(int i=1;i<=x;i++)
    {
	  s1=s1+i;
    }
   for(int j=x;j<=n;j++)
    {
	  s2=s2+j;
    }
   if(s1==s2)
  {
  f=1;
   break;
  }
}
if(f==0)
printf("-1");
else 
printf("Pivot integer is %d.",x);
}