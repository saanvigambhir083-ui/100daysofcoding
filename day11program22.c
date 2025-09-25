#include<stdio.h>
void main()
{    double cp, sp; double percent;
    printf("Enter the cost price:");
    scanf("%lf", &cp);
    printf("Enter the selling price:");
    scanf("%lf", &sp);
    if(sp>cp)
    {
     percent= ((sp-cp)/cp)*100;
     printf("Profit %lf ",percent);
    }
    else if(cp>sp)
    {
      percent= ((cp-sp)/cp)*100;
        printf("Loss %lf ",percent);
    }
    else printf("No profit no loss");
}