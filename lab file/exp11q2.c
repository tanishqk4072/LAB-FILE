#include <stdio.h>

int main() {
    int a = 10;
    int leftshift, rightshift;

    leftshift = a << 2;
    printf("%d \n", leftshift);

    rightshift = a >> 4;
    printf("%d\n", rightshift);

    return 0;
}
