#include <stdio.h>

#define ADD(a,b) ((a) + (b))
#define SUB(a,b) ((a) - (b))
#define MULTIPLY(a,b) ((a) * (b))

int main() {
    int x = 4, y = 2;
    printf("The addition of two numbers is: %d\n", ADD(x,y));
    printf("The subtraction of the numbers is: %d\n", SUB(x,y));
    printf("The multiplication of two numbers is: %d\n", MULTIPLY(x,y));
    return 0;
}
