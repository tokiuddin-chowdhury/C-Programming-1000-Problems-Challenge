/*
 * Problem: 116 - Hotel Booking Conflict Checker
 * Author: Omar Mohammad Toki Uddin Chowdhury
 * Date: 21 November 2026
 */
#include <stdio.h>

int main() {
    int in1, out1;
    int in2, out2;

    scanf("%d %d", &in1, &out1);
    scanf("%d %d", &in2, &out2);

    if (in1 < out2 && in2 < out1) {
        printf("Conflict\n");
    } else {
        printf("No Conflict\n");
    }

    return 0;
}