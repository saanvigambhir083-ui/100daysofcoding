#include<stdio.h>
void main() 
{
    int n, m;
    printf("Enter the no. of rows and columns:");
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("Enter the elements:");
    for (int i=0; i<n;i++)
    for (int j=0;j<m;j++)
    scanf("%d",&a[i][j]);

     for (int k=0;k<m;k++) 
     {
        int i=0,j=k;
        while(i<n && j>=0)
        printf("%d ",a[i++][j--]);
    }
    for (int k=1;k<n;k++) 
    {
        int i=k,j=m-1;
        while (i<n && j>=0)
        printf("%d ",a[i++][j--]);
    }
}