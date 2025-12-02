#include <stdio.h>
int main() {
    int m,n,p,q;
    printf("Enter the no. of rows for matrix A:");
    scanf("%d" , &m);
    printf("Enter the no. of columns for matrix A:");
    scanf("%d" , &n);

    printf("Enter the no. of rows for matrix B:");
    scanf("%d" , &p);
    printf("Enter the no. of columns for matrix B:");
    scanf("%d" , &q);

    if(n != p){
        printf("Not compatible for matrix multiplication");
        return 0;
    }

    int a[m][n];
    int b[p][q];
    int c[m][q];

    printf("Insert the elements of matrix A:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("element %d %d :" , i , j);
            scanf("%d" , &a[i][j]);
        }
    }

    printf("Input element of matrix B:\n");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            printf("element %d %d :" , i , j);
            scanf("%d" , &b[i][j]);
        }
    }

    printf("Matrix A (%d x %d):\n" , m , n );
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d " , a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B (%d x %d):\n" , p , q );
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            printf("%d " , b[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            c[i][j] = 0;
            for(int k=0; k<n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product matrix C(%d x %d):\n" , m , q);
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            printf("%d " , c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
