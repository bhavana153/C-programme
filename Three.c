#include <stdio.h>

int main() {
    int a, b, c, smallest;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    
    if (a <= b && a <= c) {
        smallest = a;
    } else if (b <= a && b <= c) {
        smallest = b;
    } else {
        smallest = c;
    }

   
    printf("The smallest number is: %d\n", smallest);

    return 0;
}
