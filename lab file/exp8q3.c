#include <stdio.h>

void value(int *ptr1, float *ptr2) {
    int temp_int = *ptr1;
    float temp_float = *ptr2;
    
    *ptr1 = temp_int + 10;    
    *ptr2 = temp_float + 20.0f;
    printf("New value of ptr1: %d\n", *ptr1);
    printf("New value of ptr2: %f\n", *ptr2);
}

int main() {
    int a = 10;
    float b = 20;
    printf("Original values: a = %d, b = %f\n", a, b);
    value(&a, &b);
    printf("Modified values: a = %d, b = %f\n", a, b);
    return 0;
}
