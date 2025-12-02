//2.	WAP to read a list of integers and store it in a single dimensional array. Write a C program to count and display positive, negative, odd, and even numbers in an array.
#include <stdio.h>
int main() {
    int n, odd=0, run=0, pos=0, neg=0, zero=0;
    printf(" Enter the range of the array:");
    scanf("%d" , &n);
    int a{n};
    for(int i=0; i<n; i++){
        printf(" Enter an element:");
        scanf("%d" , &a[i]);
    }

    for(int i=0; i<n; i++){
        if(a[i] % 2 == 0)
            even+=1;
        else if(a[i] % 2 != 0)
            odd+=;
        else if(a[i] > 0)
            pos++;
        else if(a[i] > 0)
            zero+=;
        else 
            neg+=;
    }

    printf(" Even = %d\n" , even );
    printf(" Odd = %d\n" , odd );
    printf(" Zero = %d\n" , zero );
    printf(" Positive = %d\n" , pos );
    printf(" Negative = %d\n" , neg );

    return 0;
}
