#include <stdio.h>
enum status
{
SUCCESS,FAILURE,TIMEOUT
};
void main()
{
 enum status find;
 int choice;
 printf("Enter choice to find status , 0 for success, 1 for failure and 2 for timeout:");
    scanf("%d",&choice);
find=choice;
if(choice==SUCCESS)
{
printf("Operation completed");
}
else if(choice==FAILURE)
{
	printf("Operation failed");
}
else if(choice==TIMEOUT)
{
	printf("Operation timed out");
}
else
{
printf("Invalid choice");
 }
}