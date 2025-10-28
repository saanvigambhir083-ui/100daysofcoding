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
  int f=0;
  for(int i=0; i<r; i++)
  {
    for(int j=0; j<c;j++)
    {
    if(a[i][j]==a[j][i])
    continue;
    else 
    {f=1; break;}
    }
  }
  if(f==0)
  printf("true");
  else
  printf("false");
}