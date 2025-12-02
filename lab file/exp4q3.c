#include <stdio.h>
int main() {
    int x = 10;
    {
        int y = 20;
        printf(" Inside block x = %d y = %d \n" , x , y );
    }
    return 0;
}
