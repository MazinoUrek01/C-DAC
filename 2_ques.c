#include<stdio.h>
int main() {
    int a,i,result = 1;
    printf("Enter the number: ");
    scanf("%d", &a);
    for(i = 1 ; i <= a ; i++){
        result *= i; 
    }
    printf("The factorial of %d is %d\n", a,result);
    return 0;
}