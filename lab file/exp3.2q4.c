#include <stdio.h>
int main() {
    long population = 100000 ;
    float rate = 0.10 ;
    int years = 10;
    for( int i =1 ; i <=years ; i ++ ){
        population = population + (population * (rate));
        printf("End of year %d population will be %d\n" , i , population);
    }
    return 0;
}
