//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>

int main(void)
{

    int n10, n11, n12, n13;
    int n20, n21, n22, n23;
    int n30, n31, n32, n33;
    int n40, n41, n42, n43;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n10, &n11, &n12, &n13, &n20, &n21, &n22, &n23, &n30, &n31, &n32, &n33, &n40, &n41, &n42, &n43);
    int r1 = n10 + n11 + n12 + n13;
    int r2 = n20 + n21 + n22 + n23;
    int r3 = n30 + n31 + n32 + n33;
    int r4 = n40 + n41 + n42 + n43;

    int c1 = n10 + n20 + n30 + n40;
    int c2 = n11 + n21 + n31 + n41;
    int c3 = n12 + n22 + n32 + n42;
    int c4 = n13 + n23 + n33 + n43;

    int d1 = n10 + n21 + n32 + n43;
    int d2 = n40 + n31 + n22 + n13;

    printf("Row sums: %d %d %d %d\n", r1, r2, r3, r4);
    printf("Column sums: %d %d %d %d\n", c1, c2, c3, c4);
    printf("Diagonal sums: %d %d", d1, d2);
    return 0;
}
