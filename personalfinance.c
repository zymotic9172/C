/*Personal finance program
Project Started: November 7, 2018*/
#include <stdio.h>

int running = 1;
char command;

int main()
{
    char amount[5];
    while(running == 1)
    {
        printf("Welcome to the personal finance app. Please choose which number option you would like.\n1. Deposit\n2. Withdraw\n3. Coin Jar\n4. Current Balance\n5. Quit\n");
        command = getchar();
        switch (command)
        {
            case '1':
                /*deposit*/
                deposit();
                printf("How much would you like to deposit?\n");
                fgets(amount, 5, stdin);
                printf("%c\n", &amount);
                running = 1;
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
void deposit()
{
    printf("This is in the function.");
}
