#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void addStudentRecord(const char* filename) {
    struct Student s;
    FILE *f = fopen(filename, "ab"); // Append in binary mode
    if (f == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter student name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(struct Student), 1, f);
    fclose(f);
    printf("Record saved successfully.\n");
}

void displayRecords(const char* filename) {
    struct Student s;
    FILE *f = fopen(filename, "rb"); 
    if (f == NULL) {
        printf("Error opening file or file not found.\n");
        return;
    }

    printf("\nStudent Records:\n");
    while (fread(&s, sizeof(struct Student), 1, f)) {
        printf("Name: %s\nRoll No: %d\nMarks: %.2f\n\n", s.name, s.roll, s.marks);
    }

    fclose(f);
}

int main() {
    int choice;
    const char* filename = "students.dat";

    do {
        printf("\nStudent Record Management\n");
        printf("1. Add Record\n");
        printf("2. Display Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudentRecord(filename); break;
            case 2: displayRecords(filename); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
