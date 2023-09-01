#include<stdio.h>
#include<stdlib.h>
int main() {
    int a[10][10], b[10][10], cm[10][10],i, j, r, c, r1, c1, k;
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d%d", &r, &c);
    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d%d", &r1, &c1);

    if(c != r1) {
        printf("Cannot multiply with different number of rows\n");
        return 0;
    }
    printf("Enter the first matrix:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++ ) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the second matrix:\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++ ) {
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < c; i++) {    
        for(j = 0; j < c1; j++) {    
            cm[i][j] = 0;    
            for(k = 0; k < c; k++) {    
                cm[i][j] += a[i][k] * b[k][j];    
            }    
        }    
    }  

printf("The multiplication of matrix A and B is:\n");

    for(i = 0; i < c; i++) {    
        for(j = 0; j < c1; j++) {    
            printf("%d\t", cm[i][j]);    
        }    
        printf("\n");    
    }  

    printf("\n");
    return 0;
}