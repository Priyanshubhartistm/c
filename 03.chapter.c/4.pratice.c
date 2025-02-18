// practice Qs 9
/*
write a program to check if a student passed or failed.

marks > 30 is pass
marks <= 30 is fail
*/

#include <stdio.h>

int main(){
    int marks;
    printf("enter number(0-100) : ");
    scanf("%d",&marks);

    if(marks >= 0 && marks <= 30){
        printf("fail\n");
    }else if(marks > 30 && marks <= 100){
        printf("pass\n");
    }else {
        printf("wrong marks");

    }
    
    return 0;

}

// if(marks >= 70 && marks < 90){
//         printf("A\n");