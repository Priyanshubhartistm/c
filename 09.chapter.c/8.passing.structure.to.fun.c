#include<stdio.h>
#include <string.h>

// user defined
struct student{    // y student k structure h
    int roll;
    float cgpa;
    char name[100];
};

void printinfo(struct student s1);

int main() {
    struct student s1 = {12, 9.7, "priyanshu"};
    printinfo(s1);

    printf("student.roll = %d\n", s1.roll);


    return 0;
}

// call by value
void printinfo(struct student s1) {
    printf("student information : \n");
    printf("student roll : %d\n", s1.roll);
    printf("student name : %s\n", s1.name);
    printf("student cgpa : %f\n", s1.cgpa);

    // call by refernce
    s1.roll = 22;
}