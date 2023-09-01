#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]) {

    int arr[atoi(argv[1])],i,max = 0;
    for(i = 0 ; i < atoi(argv[1]) ; i++){
        printf("Enter %d Number: ", i);
        scanf("%d",&arr[i]);
        if(max < arr[i])
            max = arr[i];
    }
    
    printf("The maximum number in the n mumbers is %d\n", max);

    return 0;
}