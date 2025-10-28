#include<stdio.h>
void main() 
{
    int n, m;
    printf(" Enter the no. of rows and columns:");
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    printf("Enter the elements:");
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int flag = 1;  
    for(int i = 0; i < n; i++) 
    {
        for(int j = i + 1; j < n; j++) 
        {
            if (matrix[i][i] == matrix[j][j]) 
            {
                flag = 0;  break;
            }
        }
        if (flag == 0) break;
    }

    if(flag)
        printf("True");
    else
        printf("False");
}