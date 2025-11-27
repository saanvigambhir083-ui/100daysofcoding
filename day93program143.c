#include<stdio.h>
struct stu
{
    char name[40];
    int roll;
    float marks;
};
void main()
 {
    struct stu students[3];
    for (int i=0;i<3;i++) 
    {
        printf("Enter name,roll no. and marks for student %d: ",i + 1);
        scanf("%s %d %f",students[i].name,&students[i].roll,&students[i].marks);
    }
    float max=students[0].marks;
    int maxindex=0;
    for (int i=1;i<3;i++)
	{
        if (students[i].marks>max) 
        {
            max=students[i].marks;
            maxindex=i;
        }
    }
 printf("Topper %s , Marks= %f",students[maxindex].name,students[maxindex].marks);
}