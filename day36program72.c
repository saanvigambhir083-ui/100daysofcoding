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
  int sum=0;
 for(int i=0; i<r; i++)
  {
    for(int j=0; j<c;j++)
    {
    printf("%d ",a[i][j]);
     sum=sum+a[i][j];
    }
    printf("\n");
  }
  printf("Sum= %d", sum);
}