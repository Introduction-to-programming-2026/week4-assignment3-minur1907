#include <stdio.h>
#include <string.h>

#define SIZE 5

// 1. Struct definition
struct Person {
    char name[50];
    char phone[20];
};

int main() {
    struct Person phonebook[SIZE];
    char searchName[50];
    int found = 0;

    // 2. Pre-filled contacts (you can also take input if required)
    for (int i = 0; i < SIZE; i++) {
        printf("Enter name for contact %d: ", i + 1);
        scanf("%s", phonebook[i].name);

        printf("Enter phone for contact %d: ", i + 1);
        scanf("%s", phonebook[i].phone);
    }

    // 3. Ask user for name to search
    printf("\nEnter name to search: ");
    scanf("%s", searchName);

    // 4. Search using strcmp()
    for (int i = 0; i < SIZE; i++) {
        if (strcmp(phonebook[i].name, searchName) == 0) {
            printf("Phone number: %s\n", phonebook[i].phone);
            found = 1;
            break;
        }
    }

    // 5. If not found
    if (!found) {
        printf("Not found\n");
    }

    return 0;
}
