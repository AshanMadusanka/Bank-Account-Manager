#include <stdio.h>
#include <stdint.h>

uint32_t acc_count;

typedef struct {

    char name[50];
    uint32_t account_number;
    float balance;
}Account_Data_t;

Account_Data_t account_data[50];

void showAllAccount(Account_Data_t *account_data, uint32_t *acc_count);
void withdrawMoney(Account_Data_t *account_data, uint32_t *acc_count);
void depositMoney(Account_Data_t *account_data, uint32_t *acc_count);
void createNewAccount(Account_Data_t *account_data, uint32_t *acc_count);
void displayMessages();

int main(void) {


    while (1) {

        displayMessages();
        uint32_t user_choise = 0;
        scanf("%d",&user_choise);

        switch (user_choise) {

            case 1:
                createNewAccount(account_data,&acc_count);
                break;
            case 2:
                showAllAccount(account_data,&acc_count);
                break;
            case 3:
                withdrawMoney(account_data,&acc_count);
                break;
            case 4:
                depositMoney(account_data,&acc_count);
                break;
            default:
                printf("Invalid User Input\n");
        }
    }

}



void createNewAccount(Account_Data_t *account_data, uint32_t *acc_count) {

    uint32_t acc_number = 0;
    printf("Enter Account ID: ");
    scanf("%d",&acc_number);

    for(uint32_t i = 0; i< *acc_count; i++) {

        if (account_data[i].account_number == acc_number) {

            printf("Account Number Already Exited!\n");
            return;
        }

        }

            account_data[*acc_count].account_number = acc_number;
            getchar();
            printf("Please Enter Account Holder Name: ");
            scanf("%50[^\n]",&account_data[*acc_count].name);
            printf("Enter Account Balance: ");
            scanf("%f",&account_data[*acc_count].balance);
           printf("Account Added Successfully.. \n");
            (*acc_count)++;





}

void depositMoney(Account_Data_t *account_data, uint32_t *acc_count) {

    uint32_t acc_number= 0;
    printf("Please Enter Account Number: ");
    scanf("%d",&acc_number);

    for(uint32_t i = 0; i< *acc_count; i++) {

        if (account_data[i].account_number == acc_number) {
            float deposite_amount = 0;

            printf("Enter Amount: ");
            scanf("%f",&deposite_amount);
            account_data[i].balance+=deposite_amount;
            printf("\n");
            printf("Successfully Deposit Money\n");
            return;


        }

    }

    printf("Account Number doesn't Exited!\n");



}


void withdrawMoney(Account_Data_t *account_data, uint32_t *acc_count) {

    uint32_t acc_number= 0;
    printf("Please Enter Account Number: ");
    scanf("%d",&acc_number);

    for(uint32_t i = 0; i< *acc_count; i++) {

        if (account_data[i].account_number == acc_number) {
            float withdraw_amount = 0;

            printf("Enter Withdraw Amount: ");
            scanf("%f",&withdraw_amount);
            account_data[i].balance -= withdraw_amount;
            printf("\n");
            printf("Successfully withdraw Money\n");
           return;


        }

    }

    printf("Account Number doesn't Exited!\n");


}

void showAllAccount(Account_Data_t *account_data, uint32_t *acc_count) {

    for(uint32_t i = 0; i< *acc_count; i++) {

        printf("Account Holder Name: %s\n",account_data[i].name);
        printf("Account Number: %d\n",account_data[i].account_number);
        printf("Account Balance: Rs. %0.3f\n",account_data[i].balance);
        printf("\n");

    }

}

void displayMessages() {

    printf("\n");
    printf("Add a new Account press                    (1)\n");
    printf("Display all Accounts press                 (2)\n");
    printf("Enter withdraw Money press                 (3)\n");
    printf("Enter Deposit Money press                  (4)\n");

}