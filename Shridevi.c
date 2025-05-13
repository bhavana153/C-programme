#include <stdio.h>

// Function declaration
void shridevi();

int main() {
    // Call the function
    shridevi();
    return 0;
}

// Function definition
void shridevi() {
    
    char name[] = "Shridevi";
    int age = 18;
    char dob[] = "05-12-2005";
    char mobile[] = "9036440487";

    
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Date of Birth: %s\n", dob);
    printf("Mobile Number: %s\n", mobile);
}
