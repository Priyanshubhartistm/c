#include<stdio.h>
#include <string.h>

// user defined
struct student{    // y student k structure h
    int role;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1;  // y student k information bna li h
    s1.role = 1664;
    s1.cgpa = 9.2;
    //s1.name = "priya";
    strcpy(s1.name, "priya");

    printf("student name = %s\n", s1.name);
    printf("student roll no = %d\n", s1.role);
    printf("student cgpa = %f\n", s1.cgpa);

    return 0;
}