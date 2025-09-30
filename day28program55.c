#include<stdio.h>
void main()
{  int n; int c;
  printf("Enter a number n:");
  scanf(" %d", &n);
  printf("All prime numbers between 1 and %d are: ", n);
  for(int i=2; i<=n; i++)
  {
    c=0;
    for(int j=1; j<=i; j++)
    {
        if(i%j==0)
        c++;
    }
    if(c==2)
    printf("%d  ",i);
  }
}