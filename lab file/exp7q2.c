#include <stdio.h>

struct emp {
    char name[50];
    float gross_sal;
    float basic_pay;
    float da;
};

int main() {
    struct emp e[100];
    int i, n;
    printf("Enter number of employees (max 100): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf(" %49[^\n]", e[i].name);
        printf("Enter basic pay: ");
        scanf("%f", &e[i].basic_pay);
        printf("Enter DA: ");
        scanf("%f", &e[i].da);
        e[i].gross_sal = e[i].basic_pay + e[i].da;
    }

    printf("\nEmployee details:\n");
    for (i = 0; i < n; i++) {
        printf("%s\t%.2f\n", e[i].name, e[i].gross_sal);
    }

    return 0;
}
