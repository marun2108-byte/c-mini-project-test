#include <stdio.h>
#include <stdlib.h>

int main() {
    setbuf(stdout, NULL);   // Disable buffering (VERY IMPORTANT for browser)

    char name[50];

    printf("Enter your name: ");
    fflush(stdout);

    if (scanf("%49s", name) != 1) {
        printf("Invalid input.\n");
        return 0;
    }

    printf("Hello, %s!\n", name);

    return 0;
}