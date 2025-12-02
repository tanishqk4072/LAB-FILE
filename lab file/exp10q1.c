#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node *next;
};

int main() {
    struct node *first = NULL;
    struct node *sec = NULL;
    struct node *third = NULL;

    /* allocate nodes */
    first = (struct node*)malloc(sizeof(struct node));
    sec   = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    /* assign data and link them */
    first->a = 10;
    first->next = sec;

    sec->a = 20;
    sec->next = third;

    third->a = 30;
    third->next = NULL;

    /* traverse and print */
    struct node *k = first;
    while (k != NULL) {
        printf("%d ", k->a);
        k = k->next;
    }
    printf("\n");

    free(first);
    free(sec);
    free(third);
    return 0;
}
