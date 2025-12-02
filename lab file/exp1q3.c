#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);  // Reads a single-word name

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello %s ,your age is %d years old.\n", name, age);

    return 0;
}
