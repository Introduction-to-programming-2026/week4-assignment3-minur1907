#include <stdio.h>
#include <string.h>

int main() {
    // 1. Array of strings
    char names[5][50] = {"Ali", "Veli", "Ayse", "Mehmet", "Zeynep"};
    char search[50];
    int found = 0;

    // 2. Ask user for a name
    printf("Enter a name to search: ");
    scanf("%s", search);

    // 3. Linear search using strcmp()
    for (int i = 0; i < 5; i++) {
        if (strcmp(names[i], search) == 0) {
            found = 1;
            break;
        }
    }

    // 5. Output
    if (found)
        printf("Found\n");
    else
        printf("Not found\n");

    return 0;
}
