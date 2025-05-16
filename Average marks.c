#include <stdio.h>

// Define a structure to store student details
struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student students[3];
    int i;
    float total = 0, average;

    
    for(i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter marks of %s: ", students[i].name);
        scanf("%d", &students[i].marks);

        total += students[i].marks;
    }

   
    average = total / 3;


    printf("\nAverage marks of 3 students: %.2f\n", average);

    return 0;
}
