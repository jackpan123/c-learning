//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>

int main(void)
{

    float price;
    int number, year, month, day;
    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy):");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Item\tUnit\tPurchase\n    \tPrice\tDate\n%-4d\t$%6.2f\t%-.2d/%-.2d/%-d\n", number, price, day, month, year);
    return 0;
}
