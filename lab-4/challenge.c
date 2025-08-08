#include <stdio.h>

int main(){
    int operation = 0;
    int input = 0;
    do {
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");   
        printf("Choose an option: ");
        scanf("%d" , &operation);
        switch (operation)
        {
        case 1:
            printf("Current Balance: ");
            scanf("%d" , &input);
            break;
        case 2:
            printf("Enter amount to deposit: ");
            scanf("%d" , &input);
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%d" , &input);
            break;
        }
    } while (operation != 4);
    printf("Thank you for using the ATM.");
}