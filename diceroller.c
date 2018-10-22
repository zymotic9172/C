#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void printRandoms(int lower, int upper, int count) 
{ 
    int rolls[die1];
    int i, sum; 
    for (i = 0; i < count; i++) 
    { 
        int num = (rand() %(upper - lower + 1)) + lower; 
        scanf("%d ", rolls[i]); 
    }
    for(i = 0; i < count; i++)
    {
        sum = sum + rolls[i];
    }
    printf("%d", &sum);
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
        int rolls[die1];
        int sum = 0;
        int i = 0;
        int lower = 1, upper = die2, count = 1;
        srand(time(0));
        printRandoms(lower, upper, count);
        for (i = 0; i < count; i++) 
    { 
        int num = (rand() %(upper - lower + 1)) + lower; 
        scanf("%d ", rolls[i]); 
    }
    for(i = 0; i < count; i++)
    {
        sum = sum + rolls[i];
    }
    printf("%d", &sum);
        d++;
        sleep(1);
    }
} 