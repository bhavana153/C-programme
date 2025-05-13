#include <stdio.h>

int main() {
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);


    if (number >= 10 && number <= 100) {
        printf("The number is within the range 10 to 100.\n");
    } else {
        printf("The number is outside the range 10 to 100.\n");
    }

    return 0;
}
