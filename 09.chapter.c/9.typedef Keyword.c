#include<stdio.h>
#include<string.h>

// user defined

typedef struct student {
    int roll;
    float cgpa;
    char name;
} stu ;

typedef struct computerengineeringstudent {
    int roll;
    float cgpa;
    char name[100];
} coe ;


int main() {
    // struct student s1;
    // stu s2;

    coe s1;
    s1.roll = 22;
    s1.cgpa = 9.8;
    strcpy(s1.name,"priya" );
    printf("student name is %s\n", s1.name);

    return 0;
}