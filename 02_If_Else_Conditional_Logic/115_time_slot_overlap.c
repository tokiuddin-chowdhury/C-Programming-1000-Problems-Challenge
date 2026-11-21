/*
 * Problem: 115 - Time Slot Overlap Checker
 * Author: Omar Mohammad Toki Uddin Chowdhury
 * Date: 21 November 2026
 */
#include <stdio.h>

int main() {
    int start1, end1;
    int start2, end2;

    scanf("%d %d", &start1, &end1);
    scanf("%d %d", &start2, &end2);

    if(end1 <= start2 || end2 <= start1) {
        printf("No Overlap\n");
    }
    else {
        printf("Overlap\n");
    }
    return 0;
}