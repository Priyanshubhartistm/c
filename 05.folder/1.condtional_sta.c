
#include<stdio.h>
int main(){
    int age = 19;
    printf("enter age:");
    scanf("%d",&age);

    if(age>18){
        printf("adult\n");
        printf("they can vote \n");
        printf("they can drive \n");
    }
    else{
        printf("not adult\n");
    }
    printf("thank you");
    return 0;
} 


// agr hamra "if" true ni hota to uske baad hame check krni h..ki koye or condition true h..kya to hm likhte "else if"
#include<stdio.h>
#include<math.h>
int main(){
    int age;
    printf("enter age:");
    scanf("%d",&age);

    if(age>18) {
        printf("adult\n");
    }
    else if(age>13 && age<18){
        printf("teenger\n");
    }
    else{
        printf("child");
    }
    return 0;
}