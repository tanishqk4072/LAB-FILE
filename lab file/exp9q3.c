#include <stdio.h>

int main() {
    FILE *f;
    char a[100];

    f = fopen("abc.txt", "r");
    if (f == NULL) {
        printf("Not able to open\n");
        return 1;
    }

    while (fgets(a, sizeof(a), f) != NULL) {
        printf("%s", a);
    }

    fclose(f);
    return 0;
}
