// pratice que. 10

/*
write a program to given grades to a student

      marks <30 is C
30 <= marks <70 is B
70 <= Marks <90 is B
90 <= Marks <=100 is A+

*/

#include <stdio.h>
int main(){
    int marks;
    printf("enter number(0-100) : ");
    scanf("%d", &marks);

    if(marks < 30){
        printf("c\n");
    }
    else if(marks >= 30 && marks < 70){
        printf("b\n");
    }
    else if(marks >= 70 && marks < 90){
        printf("a\n");
    }
    else{
        printf("a++");
    }
}