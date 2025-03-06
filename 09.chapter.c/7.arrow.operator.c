#include<stdio.h>
#include <string.h>

// user defined
struct student{    // y student k structure h
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1 = {12, 9.7, "priyanshu"};
    printf("student roll = %d\n", s1.roll);

    struct student *ptr = &s1;
    printf("student.roll with ptr = %d\n", (*ptr).roll);
    printf("student->roll = %d\n", ptr->roll);
    printf("student->cgpa = %d\n", ptr->cgpa);
    printf("student->name = %d\n", ptr->name);

    return 0;
}