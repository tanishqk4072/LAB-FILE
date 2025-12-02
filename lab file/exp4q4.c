#include <stdio.h>
int abc (){
    static int z = 0 ;
    static int z = 0 ;
    z++;
    return z ;
}
int main() {
    printf("%d" , abc());
    printf("%d" , abc());
    printf("%d" , abc());
    return 0;
}
