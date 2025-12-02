#include <stdio.h>

int main() {
    int var1 = 10;
    int *var1_ptr = &var1;

    printf("Value of var1: %d\n", var1);
    printf("Address of var1: %p\n", (void*)&var1);
    printf("Value stored in var1_ptr (address): %p\n", (void*)var1_ptr);
    printf("Value var1_ptr points to: %d\n", *var1_ptr);

    float var2 = 20.0;
    float *var2_ptr = &var2;
    printf("Value of var2: %f\n", var2);
    printf("Address of var2: %p\n", (void*)&var2);
    printf("Value stored in var2_ptr: %p\n", (void*)var2_ptr);
    printf("Value var2_ptr points to: %f\n", *var2_ptr);

    char var3 = 'A';
    char *var3_ptr = &var3;
    printf("Value of var3: %c\n", var3);
    printf("Address of var3: %p\n", (void*)&var3);
    printf("Value stored in var3_ptr: %p\n", (void*)var3_ptr);
    printf("Value var3_ptr points to: %c\n", *var3_ptr);

    return 0;
}
