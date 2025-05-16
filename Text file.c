#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    int lines = 0;
    char ch;

    
    printf("Enter the name of the file: ");
    scanf("%s", filename);

    
    file = fopen(filename, "r");


    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }


    fclose(file);

    printf("The file %s has %d lines.\n", filename, lines);

    return 0;
}
