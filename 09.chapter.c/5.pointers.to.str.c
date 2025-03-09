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
    printf("student roll = %d\n", (*ptr).roll);  // y h pura  pura (*ptr) variable or y h, singal parameters(.roll)

    return 0;
}