#include<stdio.h>
int main()
{
	FILE *fp=fopen("info.txt","r");
	if(fp==NULL)
	{
		printf("File couldn't be opened");
		return 0;
	}
	char line[100];
    while (fgets(line,sizeof(line),fp) != NULL)
	{
    printf("%s",line);
    }

    fclose(fp);
    return 0;
}