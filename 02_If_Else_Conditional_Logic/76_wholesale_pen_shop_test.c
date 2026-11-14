#include <stdio.h>
    int main(){
        int pens;

        printf("Enter number of pens: ");
        scanf("%d", &pens);

        if (pens >= 10) {
            printf("Total Price: %d\n", pens * 8);
        }
        else {
            printf("Total Price: %d\n", pens * 10);
        }
 return 0;

}