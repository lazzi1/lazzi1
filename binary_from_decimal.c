#include <stdio.h>

void printBinaryTernary(int n) {
    (n > 1) ? printBinaryTernary(n / 2) : 0;
    printf("%d", n % 2);
}

int main() {
    int decimal = 5;
    printf("Binary representation of %d is: ", decimal);
    printBinaryTernary(decimal);
    printf("\n");
    return 0;
}
