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

int main(void) {
    printf("Hello, World!\n");
    return 0;
}



void createNewAccount(Account_Data_t *account_data, uint32_t *acc_count) {



}

void depositMoney(Account_Data_t *account_data, uint32_t *acc_count) {



}


void withdrawMoney(Account_Data_t *account_data, uint32_t *acc_count) {



}

void showAllAccount(Account_Data_t *account_data, uint32_t *acc_count) {



}