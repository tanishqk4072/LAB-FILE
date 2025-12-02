#include <stdio.h>
int main() {
    int num=1;
    for(int i=1;i<=4;i++){
        for(int k=1;k<=4-i;k++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

