#include<stdio.h>
#include<string.h>
void main() 
{
    char s[20];
    int d, m, y;
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);
    char month[4];
    switch(m) 
    {
        case 1: strcpy(month, "Jan"); 
        break;
        case 2: strcpy(month, "Feb"); 
        break;
        case 3: strcpy(month, "Mar"); 
        break;
        case 4: strcpy(month, "Apr"); 
        break;
        case 5: strcpy(month, "May"); 
        break;
        case 6: strcpy(month, "Jun"); 
        break;
        case 7: strcpy(month, "Jul"); 
        break;
        case 8: strcpy(month, "Aug"); 
        break;
        case 9: strcpy(month, "Sep"); 
        break;
        case 10: strcpy(month, "Oct"); 
        break;
        case 11: strcpy(month, "Nov"); 
        break;
        case 12: strcpy(month, "Dec"); 
        break;
        default: strcpy(month, "Err");
    }

    printf("%02d-%s-%d", d, month, y);
}