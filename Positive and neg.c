include <stdio.h>

int main() {
    float number;


    printf("Enter a number: ");
    scanf("%f", &number);

    
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
