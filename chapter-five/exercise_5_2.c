//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>
#define TWELVE 12
int main(void)
{
    int hour, minutes;
    printf("Enter a 24-hour time:");
    scanf("%d:%d", &hour, &minutes);
    if (hour >= TWELVE) {
        if (hour != TWELVE) {
            hour = hour - TWELVE;
        }
        printf("Equivalent 12-hour time: %d:%d PM", hour, minutes);
    } else {
        printf("Equivalent 12-hour time: %d:%d AM", hour, minutes);
    }
    return 0;
}
