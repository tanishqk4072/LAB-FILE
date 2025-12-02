#include <stdio.h>
int ISPRIME(int num){
    if (num<=1)
        return 0;
    for (int i=2; i<=num/2; i++)
        if (num%i==0)
            return 0;
    return 1;
}

int main(){
    int start,end;
    printf("Enter start and end of range:");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are:", start, end);

    for (int i=start; i<=end; i++)
        if(ISPRIME(i))
            printf("%d ",i);

    return 0;
}
