#include<stdio.h>
void main()
{ int r,c;
  printf("Enter the number of rows and columns:");
  scanf("%d %d",&r, &c);
  int a[r][c];
  printf("Enter the elements:");
  for(int i=0; i<r; i++)
  {
    for(int j=0; j<c;j++)
    {
    scanf("%d",&a[i][j]);
    }
  }
  int s[r];
  int sum=0;
 for(int i=0; i<r; i++)
  {
    for(int j=0; j<c;j++)
    {
     sum=sum+a[i][j];
    }
   s[i]=sum;
   sum=0;
  }
  for(int i=0; i<r; i++)
  printf("%d  ",s[i]);
}