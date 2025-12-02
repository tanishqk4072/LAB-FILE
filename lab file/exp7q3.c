#include <stdio.h>

struct book {
    char book_id[50];
    char title[100];
    char author_name[100];
    char price[20];
};

void print_book(struct book b) {
    printf("%s, %s, %s, %s\n", b.book_id, b.title, b.author_name, b.price);
}

int main() {
    struct book b = {"101", "C Language", "Tanishq", "500"};
    print_book(b);
    return 0;
}
