#include<stdio.h>
#include<stdlib.h>

struct student {
    
    char name[20];
    char rollno[20];
    int total_marks;

};

struct student getinformation() {
    struct student s1;

    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter roll number: ");
    fgets(s1.rollno, sizeof(s1.rollno), stdin);
    printf("Enter marks: ");
    scanf("%d", &s1.total_marks);

    return s1;
}

void display(struct student d){

    printf("\nDisplaying Information:\n");
    printf("Name: ");
    printf("%s", d.name);
    printf("Roll number: %s", d.rollno);
    printf("Marks: %d\n", d.total_marks);

}

int main() {

    struct student s;

    s = getinformation();

    display(s);

   return 0; 
}