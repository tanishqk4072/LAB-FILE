#include <stdio.h>
int main() {
    int n, count=0, b;
    printf("Enter the range of the array:");
    scanf("%d" , &n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("Enter a element:");
        scanf("%d" , &a[i]);
    }

    printf("Enter a number to find freq:");
    scanf("%d" , &b);

    for(int i=0; i<n; i++){
        if(a[i] == b)
            count++;
    }

    printf(" freq = %d" , count );
    return 0;
}
