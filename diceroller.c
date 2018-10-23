#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void printRandoms(int lower, int upper, int count, int die1) 
{ 
    int i, sum, f;
    int rolls[die1];
    for (i = 0; i < count; i++) 
    { 
        rolls[f] = (rand() %(upper - lower + 1) + lower);
        /*int num = (rand() %(upper - lower + 1) + lower);*/
        
    }
    for(i = 0; i < count; i++)
    {
        printf("%d, ", rolls[f]);
    }
}
int main() 
{ 
    int die1, die2;
    int d = 0;

    printf("Please enter the number of die: \n");
    scanf("%d", &die1);
    printf("Please enter the number of sides: \n");
    scanf("%d", &die2);

    while(d < die1)
    {
        int lower = 1, upper = die2, count = 1;
        srand(time(0));
        printRandoms(lower, upper, count, die1);
        d++;
        sleep(1);
    }
} 