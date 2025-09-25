#include<stdio.h>
void main()
{   int a,b; char c;
    printf("Enter the two numbers:");
    scanf("%d %d", &a, &b);
    printf("Enter the operator:");
    scanf(" %c", &c);
    int operation;
    switch(c)
    {
        case '+': operation= a+b;
        break;
        case '-':operation=a-b;
        break;
        case '/':operation=a/b;
        break;
        case '*':operation=a*b;
        break;
        case '%':operation= a%b;
        break;
    }
    printf("Ans=%d",operation);
}