#include<stdio.h>
void main() 
{
    int r1, c1, r2, c2;
    printf("Enter the no. of rows and columns in 1st matrix:");
    scanf("%d %d", &r1, &c1);
    int a[r1][c1];
    printf("Enter the elements of 1st matrix:");
    for(int i = 0; i < r1; i++) 
    { for(int j = 0; j < c1; j++) 
        {scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the no. of rows and columns in 2nd matrix:");
    scanf("%d %d", &r2, &c2);
    int b[r2][c2];
    printf("Enter the elements if 2nd matrix:");
    for(int i = 0; i < r2; i++) 
    {for(int j = 0; j < c2; j++) 
        {scanf("%d", &b[i][j]);
        }
    }
    if(c1!=r2)
    {
        printf(" Not possible");
    }
    else
    {
    int c[r1][c2];
    int k=0;
    int s=0;
    while(k<r1)
    {
      for(int i=0; i<r1; i++)
      {
        s=0;
        for(int j=0; j<c1; j++)
        {
            s=s+ a[k][j]*b[j][i];
        }
        c[k][i]=s;
      }
      k++;
    }
    for(int i=0; i < r1; i++) 
    {for(int j = 0; j < c2; j++) 
        {printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
   }
}