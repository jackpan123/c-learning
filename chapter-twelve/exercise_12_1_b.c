//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>
int main(void)
{
    int N = 5;
    int arr[N], c;
    int *start = arr;
    int num =0;
    printf("Enter a message:");
    while ((c = getchar()) != '\n') {

        *start = c;
        start++;
        num++;
        if (start >= arr + N) {
            break;
        }
    }

    printf("Reversal is:");
    for (start = arr + num - 1; start >= arr; --start) {
        putchar(*start);
    }
    return 0;
}
