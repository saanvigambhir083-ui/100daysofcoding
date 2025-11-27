#include<stdio.h>
enum gender
{
  MALE,
  FEMALE,
  OTHER
};
void main() 
{
    enum gender g;
    int c;
    printf("Enter choice (0-2): ");
    scanf("%d",&c);
    g =(enum gender)c;  
    switch(c)
    {
    case MALE:
    printf("Male");
    break;
    case FEMALE:
    printf("Female");
    break;
    case OTHER:
    printf("Other gender");
    break;
    default:
    printf("Invalid choice");
    break;
    }
}