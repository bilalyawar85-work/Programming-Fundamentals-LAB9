#include <stdio.h>

void withdraw(float *balance, float amount) {
    if (amount <= *balance) {
        *balance = *balance - amount;
        printf("Withdrawal successful. Amount withdrawn: PKR %.2f\n", amount);
    } else {
        printf("Transaction Declined: Insufficient Balance\n");
    }
}

void deposit(float *balance, float amount) {
    *balance = *balance + amount;
    printf("Deposit successful. Updated balance: PKR %.2f\n", *balance);
}

int main() {
    float balance = 10000;
    float amount;
    int choice;

    printf("Current Balance: PKR %.2f\n\n", balance);
    printf("Select transaction type:\n");
    printf("1. Debit (Withdraw)\n");
    printf("2. Credit (Deposit)\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter amount: ");
    scanf("%f", &amount);

    if (choice == 1) {
        withdraw(&balance, amount);
    } else if (choice == 2) {
        deposit(&balance, amount);
    } else {
        printf("Invalid choice\n");
    }

    printf("\nFinal Account Balance: PKR %.2f\n", balance);

    return 0;
}