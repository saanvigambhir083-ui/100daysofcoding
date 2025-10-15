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
 for(int i=0; i<r; i++)
  {
    for(int j=0; j<c;j++)
    {
    printf("%d ",a[i][j]);
    }
    printf("\n");
  }
}