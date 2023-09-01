#include<stdio.h>
int main() {
    int marks = 0;
    
    printf("Enter the total marks: ");
    scanf("%d", &marks);
    
    if(marks < 60)
        printf("The assigned grade is: F\n");
    else if(marks >= 60 && marks < 70)
        printf("The assigned grade is: C\n");
    else if(marks >= 70 && marks < 80)
        printf("The assigned grade is: B\n");
    else if(marks >= 80 && marks < 90)
        printf("The assigned grade is: A\n");
    else if(marks >= 90)
        printf("The assigned grade is: EX\n");
    
    return 0;

}