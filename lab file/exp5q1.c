//WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers.
#include <stdio.h>
int main() {
    int n;
    printf(" Enter the range of the array:");
    scanf("%d" , &n);
    int a[n];
    for( int i =0 ; i < n ; i ++ ){
        printf("Enter an element:");
        scanf("%d" , &a[i]);
    }

    int temp;
    for( int i =0 ; i < n ; i ++ ){
        for( int j = i+1 ; j < n-1-i ; j ++ ){
            if( a[i] > a[j+1] ){
                temp = a[j];
                a[i] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    int second = a[n-2];
    printf(" Second largest element: %d" , second );
    return 0;
}
