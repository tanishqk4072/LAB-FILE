#include <stdio.h>
int main() {
    int a,b,c,d;
    int l, h1, h2;
    printf("Enter the limit (L) :");
    scanf("%d" , &l);
    printf("\n Ramanujan number upto cube of %d\n" , l);

    for(a =1 ; a <= l ; a++ ){
        for(b =a +1 ; b <= l ; b++ ){
            h1 = a*a*a + b*b*b ;
            for(c = a+1 ; c <= l ; c++ ){
                for(d = c+1 ; d <= l ; d++ ){
                    h2 = c*c*c + d*d*d ;
                    if( h1 == h2 ){
                        printf("%d^3 + %d^3 = %d^3 + %d^3\n" , a , b , c , d);
                    }
                }
            }
        }
    }
    return 0;
}
