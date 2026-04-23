#include <stdio.h>

// Recursive function to print one row of #
// (Allowed: loop inside for printing characters)
void printRow(int count) {
    for (int i = 0; i < count; i++) {
        printf("#");
    }
    printf("\n");
}

// Recursive function to print pyramid
void printPyramid(int n) {
    // Base case
    if (n == 0)
        return;

    // Recursive call
    printPyramid(n - 1);

    // Print current row
    printRow(n);
}

int main() {
    int n;

    // Input validation
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n < 1);

    // Call recursive function
    printPyramid(n);

    return 0;
}
