#include <stdio.h>

void printBinaryTernary(int n) {
    // Recursively call for higher bits and print the current bit using ternary operator
    (n > 1) ? printBinaryTernary(n / 2) : 0; // Recursive step
    printf("%d", n % 2); // Print the current bit
}

int main() {
    int decimal = 5;
    printf("Binary representation of %d is: ", decimal);
    printBinaryTernary(decimal);
    printf("\n");
    return 0;
}