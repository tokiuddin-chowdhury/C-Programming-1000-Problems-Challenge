 #include <stdio.h>
int main(){
    char symbol;
    printf("Enter any character or symbol: ");
    scanf("%c", &symbol);
    printf("You entered: %c\n", symbol);
    printf("Secret ASCII code: %d\n", symbol);
    return 0;
}