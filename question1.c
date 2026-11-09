#include <stdio.h>

float calculateDiscount(char type, float total) {
    float rate = 0;

    if (type == 'P' || type == 'p') {
        rate = 20;
    } else if (type == 'G' || type == 'g') {
        rate = 10;
    } else if (type == 'S' || type == 's') {
        rate = 5;
    }

    if (total > 10000) {
        rate = rate + 2;
    }

    float discountAmount = total * rate / 100;
    return discountAmount;
}

float calculateFinalBill(float discountedAmount) {
    float tax = discountedAmount * 15 / 100;
    float shipping = 0;

    if (discountedAmount <= 5000) {
        shipping = 300;
    }

    float finalBill = discountedAmount + tax + shipping;
    return finalBill;
}

int main() {
    char type;
    float total, discount, discountedAmount, finalBill;

    printf("Enter membership type (P/G/S): ");
    scanf(" %c", &type);

    printf("Enter total shopping amount: ");
    scanf("%f", &total);

    discount = calculateDiscount(type, total);
    discountedAmount = total - discount;
    finalBill = calculateFinalBill(discountedAmount);

    printf("\nOriginal Amount: PKR %.2f\n", total);
    printf("Discount: PKR %.2f\n", discount);
    printf("Discounted Amount: PKR %.2f\n", discountedAmount);
    printf("Final Payable Amount: PKR %.2f\n", finalBill);

    return 0;
}