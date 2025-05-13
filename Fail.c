#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks > 75) {
        printf("distinction\n");
    } else if (marks >= 40) {
        printf("pass\n");
    } else {
        printf("fail\n");
    }

    return 0;
}
