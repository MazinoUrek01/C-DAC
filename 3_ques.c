#include<stdio.h>
int main() {
    int n = 0, n1 = 1, n2, a, i;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a == 1){
        printf("The fibonacci series is: %d", n);
        return 0;
    }
    else if(a == 2) {
        printf("The fibonacci series is: %d %d", n, n1);
        return 0;
    }
    printf("The fibonacci series is: %d %d", n, n1);
    for(i = 2; i < a; i++){
        n2 = n + n1;
        printf(" %d",n2);
        n = n1;
        n1 = n2;
    }
    printf("\n");
    
    return 0;
}
