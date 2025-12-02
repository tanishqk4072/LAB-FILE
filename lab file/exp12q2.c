#include <stdio.h>
#define AREA(r) ((r)*(r))

int main() {
    int a = 10;
    printf("The area of square of side %d is: %d\n", a, AREA(a));
    return 0;
}
