include <stdio.h>

int main() {
    int num = 42;       
    int *ptr = &num;        

    
    printf("Address of num: %p\n", (void*)ptr);

    
    printf("Value of num: %d\n", *ptr);

    return 0;
}
