#include <stdio.h>
#include <string.h>

struct Address {
    char city[50];
    int pin;
};

struct Employee {
    char name[50];
    struct Address address;
};

int main() {
    struct Employee emp;

    
    strcpy(emp.name, "Alice");
    strcpy(emp.address.city, "New York");
    emp.address.pin = 10001;


    printf("Employee Name: %s\n", emp.name);
    printf("City: %s\n", emp.address.city);
    printf("PIN: %d\n", emp.address.pin);

    return 0;
}
