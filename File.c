#include <stdio.h>

int main() {
    FILE *file;
    char filename[100], 
    printf("Enter the filename to read: ");
    scanf("%s", filename);

    
    file = fopen(filename, "r");

    
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    
    printf("File contents:\n\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    
    fclose(file);

    return 0;
}
