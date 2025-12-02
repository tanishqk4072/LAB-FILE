#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newNode = NULL, *temp = NULL;
    int i, pos, value, n;

    printf("How many nodes to create initially? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter value for node %d: ", i+1);
        scanf("%d", &newNode->data);
        newNode->next = head;
        head = newNode;
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);
    printf("Enter position to insert (1-based): ");
    scanf("%d", &pos);

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        temp = head;
        for (i = 1; i < pos-1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("Position out of range\n");
            free(newNode);
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    printf("Updated list: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    return 0;
}
