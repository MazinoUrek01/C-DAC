#include<stdio.h>
#include<stdlib.h>
int main() {
    
    char ch;
    printf("Enter the Charcter : ");
    scanf("%s", &ch);

    if(ch >= 65 && ch <= 90)
        printf("The character is a UPPPER CASE alphabet.\n");
    else if(ch >= 97 && ch <= 122)
        printf("The character is a LOWER CASE alphabet.\n");
    else if(ch >= 48 && ch <= 57)
        printf("The character is a NUMBER.\n");
    else
        printf("The character is a SYMBOL.\n");
        
    return 0;

}