/*friends questionaire program that i rewrote differently*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

char age[20], name[20];
int alpha, i;

int main()
{
    printf("Welcome to Survey! What is your age?\n");
    scanf("%s", &age);
    if(isalpha(age[i]) != 0)
    {
        printf("You did not enter a number!\n");
    }
    else
    {
        printf("You are %s years old!\n", &age);
    }
    printf("Nice! Now, what is your name?\n");
    scanf("%s", name);
    printf("Hello %s! It's nice to meet you.\nWould you like to write your age and name to a file?\nPress 1 for yes or any other key for no.\n", name);
    int yn;
    scanf("%d", &yn);
    if(yn == 1)
    {
        FILE *fp;
        fp = fopen("Survey.txt", "w+");
        fprintf(fp, "Age: %s\nName: %s\n", age, name);
        fclose(fp);
        printf("All done! Check Survey.txt in the current directory!\n");
        return 0;
    }
    else
    {
        printf("Okay! Exiting...\n");
        return 0;
    }
    return 0;
}
