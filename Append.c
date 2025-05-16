#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char newLine[256];


    printf("Enter the name of the file: ");
    scanf("%s", filename);

    
    getchar();

    printf("Enter the line to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    
    fputs(newLine, file);
    fclose(file);

    printf("Line appended successfully.\n");
    return 0;
}
