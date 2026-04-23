#include <stdio.h>

int main() {
    int arr[5] = {3, 7, 1, 9, 5};  // 1. Array of integers
    int target;
    int found = 0;

    // 2. Ask user for a number
    printf("Enter a number to search: ");
    scanf("%d", &target);

    // 3. Linear search using loop
    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }

    // 4. Print result
    if (found) {
        printf("Found\n");
    } else {
        printf("Not found\n");
    }

    return 0;
}
