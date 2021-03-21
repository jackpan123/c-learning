//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>
int main(void)
{
    int N = 5;
    int arr[N], c, start;
    start = 0;
    printf("Enter a message:");
    while ((c = getchar()) != '\n') {
        arr[start++] = c;
        if (start >= N) {
            break;
        }
    }

    printf("Reversal is:");
    for (int i=start-1; i >= 0; --i) {
        putchar(arr[i]);
    }
    return 0;
}
