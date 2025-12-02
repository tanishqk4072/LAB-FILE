// //recursive
// #include <stdio.h>

// int FACT(int n) {
//     if (n == 0)
//         return 1;
//     else
//         return n * FACT(n - 1);
// }

// int main() {
//     int n, r, nCr;
//     printf("Enter n and r: ");
//     scanf("%d %d", &n, &r);

//     nCr = FACT(n) / (FACT(r) * FACT(n - r));
//     printf("Binomial Coefficient C(n,r) = %d", nCr);

//     return 0;
// }

// //non recursive
// #include <stdio.h>

// int FACT(int n) {
//     int i, fact = 1;
//     for (i = 1; i <= n; i++) {
//         fact = fact * i;
//     }
//     return fact;
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     printf("Factorial of %d = %d", num, FACT(num));
//     return 0;
// }
