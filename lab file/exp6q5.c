#include <stdio.h>
#include <string.h>

void REVERSE(char str[]) {
    int len = strlen(str);
    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    REVERSE(str);
    return 0;
}

