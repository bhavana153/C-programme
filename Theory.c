Prepared By, 
Er. M. RAJESH KANNAN. ME., 
1.1 Syntax of main with Command-Line Arguments 
int main(int argc, char *argv[]) 
● argc: Argument count (number of arguments). 
● argv: Array of strings representing arguments. 
1.2 Example Program: Command-Line Arguments 
#include <stdio.h> 
int main(int argc, char *argv[]) { 
    printf("Number of arguments: %d\n", argc); 
    for (int i = 0; i < argc; i++) { 
        printf("Argument %d: %s\n", i, argv[i]); 
    } 
    return 0; 
} 
Usage: 
./program arg1 arg2 
Output: 
Number of arguments: 3 
Argument 0: ./program 
Argument 1: arg1 
Argument 2: arg2 
2. Error Handling 
Proper error handling improves program reliability. 
2.1 Types of Errors 
1. Syntax Errors: Detected during compilation. 
2. Runtime Errors: Occur during execution (e.g., divide by zero). 
3. Logical Errors: Incorrect output due to flawed logic. 
2.2 Handling Runtime Errors 
Example: Division by Zero Check 
