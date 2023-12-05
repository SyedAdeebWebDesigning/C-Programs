#include <stdio.h>
#include <string.h>

int main()
{

    struct Student {
        char name[30];
        int marks1;
        int marks2;
        int marks3;
        int marks4;
        int marks5;
    };
    
    struct Student student;
    strcpy(student.name, "Adeeb");
    student.marks1 = 90;
    student.marks2 = 98;
    student.marks3 = 97;
    student.marks4 = 99;
    student.marks5 = 99;

    printf("Marks of Student: %s is %d %d %d %d %d\n", student.name, student.marks1, student.marks2, student.marks3, student.marks4, student.marks5);
    return 0;
}
