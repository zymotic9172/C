/*Personal finance program
Project Started: November 7, 2018*/
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

int running = 1;
char command;
int deposit();

int main()
{
    while(running == 1)
    {
        printf("Welcome to the personal finance app. Please choose which number option you would like.\n1. Deposit\n2. Withdraw\n3. Coin Jar\n4. Current Balance\n5. Quit\n");
        command = getchar();
        switch (command)
        {
            case '1':
                /*deposit*/
                deposit();
                break;
            case '2':
                /*withdraw*/
                running = 1;
                break;
            case '3':
                /*coin jar*/
                running = 1;
                break;
            case '4':
                /*current balance*/
                running = 1;
                break;
            case '5':
                /*exit*/
                printf("Goodbye.\n");
                running = 0;
                return 0;
                break;
        }
    }
    return 0;
}
int deposit()
{
    int* amount = malloc(32); /*keeps the buffer from overflowing preventing a seg fault*/
    printf("How much would you like to deposit?\n");
    scanf("%d", &amount);
    printf("Transaction Complete!\n");
    return 0;
}