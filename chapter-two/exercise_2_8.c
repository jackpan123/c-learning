//
// Created by JackPan on 2021/3/14.
//
#include <stdio.h>

int main() {

    float loan, rate, payment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    float monthly = (rate / 100.0 / 12.0) + 1;

    loan = loan * monthly - payment;
    printf("Balance remaining after first payment: $%.2f\n", loan);

    loan = loan * monthly - payment;
    printf("Balance remaining after second payment: $%.2f\n", loan);

    loan = loan * monthly - payment;
    printf("Balance remaining after third payment: $%.2f\n", loan);
    return 0;
}
