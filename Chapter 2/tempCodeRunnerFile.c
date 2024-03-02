#include <stdio.h>

int main() {
    int i, j;
    int size = 5; // Adjust the size as needed

    // Upper part of the symbol
    for (i = 0; i < size / 2; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        printf("\\\n");
    }

    // Lower part of the symbol
    for (i = size / 2; i >= 0; i--) {
        for (j = i; j > 0; j--) {
            printf(" ");
        }
        printf("\\\n");
    }

    return 0;
}
