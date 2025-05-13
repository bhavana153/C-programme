#include <stdio.h>

int main() {
    int num1, num2, result = 0, i = 0;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    while (i < num2) {
        result += num1;
        i++;
    }

    printf("Multiplication of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
