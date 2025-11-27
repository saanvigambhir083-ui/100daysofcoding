#include<stdio.h>
enum traffic 
{
	RED,YELLOW,GREEN
};
void main()
{
enum traffic signal;
int choice;
printf("Enter signal [0(RED),1(YELLOW),2(GREEN)]: ");
scanf("%d",&choice);
signal=choice;
if(signal==RED)
printf("Stop\n");
else if(signal==YELLOW)
printf("Wait\n");
else if(signal==GREEN)
printf("Go\n");
else
printf("Invalid signal\n");
}