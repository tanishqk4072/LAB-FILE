#include <stdio.h>

int main() {
    FILE *f;
    char a[100] = "This is a sample line.\n";

    f = fopen("abc.txt", "w");
    if (f == NULL) {
        printf("Not able to open\n");
        return 1;
    }
    fputs(a, f);
    fclose(f);
    return 0;
}
