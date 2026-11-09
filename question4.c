#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int compute(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

int main() {
    int num1, num2;
    int sum, product, maximum;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    sum = compute(num1, num2, add);
    product = compute(num1, num2, multiply);
    maximum = compute(num1, num2, findMax);

    printf("\nSum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Maximum: %d\n", maximum);

    return 0;
}