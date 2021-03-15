//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>

int main(void)
{
    int year, month, day;
    printf("Enter a date (mm/dd/yyyy):");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("You entered the date %d%.2d%.2d", year, month, day);
    return 0;
}
