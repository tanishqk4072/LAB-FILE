#include <stdio.h>

int main() {
    int a1[] = {10, 20, 30, 40};
    int *a1p = &a1[0];
    char a2[] = {'A', 'B', 'C', 'D'};
    char *a2p = &a2[0];

    printf("Initial value and address of int pointer:\n");
    printf("pointer: %p, *pointer: %d\n", (void*)a1p, *a1p);

    a1p++;
    printf("After increment: pointer: %p, *pointer: %d\n", (void*)a1p, *a1p);

    a1p--;
    printf("After decrement: pointer: %p, *pointer: %d\n", (void*)a1p, *a1p);

    printf("\nChar pointer initial:\n");
    printf("pointer: %p, *pointer: %c\n", (void*)a2p, *a2p);
    a2p++;
    printf("After increment char pointer: %p, *pointer: %c\n", (void*)a2p, *a2p);

    return 0;
}
