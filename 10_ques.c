#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main() {
    char nameOfStudents[10][50],i,j;

    printf("Enter the name of the students: \n");

    for(i = 0 ; i < 10 ; i++) {
        scanf("%s", nameOfStudents[i]);
        }
    
    for(i = 0 ; i < 10 ; i++) {
        printf("%s\n",nameOfStudents[i]);    
    }
    

    return 0;
}