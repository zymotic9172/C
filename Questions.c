/*reddit challenge #1*/
/*written 11/2/18*/
#include <stdio.h>

char name[20], reddituser[20];
int age;
FILE *fp;
void main()
{
    printf("Please enter your name:\n");
    scanf("%s", name);
    printf("Please enter your age:\n");
    scanf("%d", &age);
    printf("Please enter your reddit user name:\n");
    scanf("%s", reddituser);
    printf("Your name is %s, you are %d years old, and your reddit username is %s\n", name, age, reddituser);
    fp = fopen("/home/zymotic/C/test.txt", "w+");
    fprintf(fp, "%s\n%d\n%s\n", name, age, reddituser);
    fclose(fp);
}