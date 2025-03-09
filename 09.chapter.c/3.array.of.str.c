#include<stdio.h>
#include <string.h>

// user defined
struct student{    // y student k structure h
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student ece[100];    // normal jo data type h,o fir variable , fir array k nam or fir array k size or usme 
    ece[0].roll = 1664;
    ece[0].cgpa = 9.5;
    strcpy(ece[0].name, "priya");
    printf("name = %s\n",  ece[0].name);

    return 0;
}