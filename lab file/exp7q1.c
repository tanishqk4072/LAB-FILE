#include <stdio.h>
struct complex{
    float real;
    float imag;
};

struct complex read_complex(){
    struct complex C;
    printf("Enter real part:");
    scanf("%f", &C.real);
    printf("Enter imaginary part:");
    scanf("%f", &C.imag);
    return C;
}

void display_complex(struct complex C){
    printf("%2f + %2fi\n", C.real, C.imag);
}

struct complex add(struct complex C1, struct complex C2){
    struct complex sum;
    sum.real = C1.real + C2.real;
    sum.imag = C1.imag + C2.imag;
    return sum;
}

struct complex subtract(struct complex C1, struct complex C2){
    struct complex diff;
    diff.real = C1.real - C2.real;
    diff.imag = C1.imag - C2.imag;
    return diff;
}

int main(){
    struct complex C1, C2, sum, diff;
    printf("Enter first complex number:\n");
    C1 = read_complex();
    printf("Enter second complex number:\n");
    C2 = read_complex();

    sum = add(C1,C2);
    diff = subtract(C1,C2);

    printf("First complex number:");
    display_complex(C1);
    printf("Second complex number:");
    display_complex(C2);
    printf("Sum:");
    display_complex(sum);
    printf("Difference:");
    display_complex(diff);

    return 0;
}
