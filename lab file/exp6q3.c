#include <stdio.h>
int FIBO(int n){
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return FIBO(n-1)+FIBO(n-2);
}

int main(){
    int n,i;
    printf("Enter number of terms:");
    scanf("%d",&n);
    printf("Fibonacci series:");
    for(i=0; i<n; i++)
        printf("%d", FIBO(i));
    return 0;
}
