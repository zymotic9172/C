#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void printRandoms(int lower, int upper, int count) 
{ 
    for (i = 0; i < count; i++) 
    { 
        int num = (rand() %(upper - lower + 1)) + lower; 
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
        printRandoms(lower, upper, count);
        d++;
        sleep(1);
    }
} 
