#include<stdio.h>
void main()
{ int m;
  printf("Enter the no. of rows :");
  scanf("%d %d",&m);
  int a[m][m];
  printf("Enter the elements:");
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<m;j++)
    {
    scanf("%d",&a[i][j]);
    }
  }
  int sum=0;
 for(int i=0; i<m; i++)
  {
    for(int j=0; j<m;j++)
    { if(i==j)
     sum=sum+a[i][j];
    }
  }
  printf("sum= %d",sum);
}