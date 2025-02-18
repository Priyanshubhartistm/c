// conditional statement are 2 type :- 1.if-else(if means in english agr,o chiz ni hui to else kr do) ; 2. switch(coding ke andr switch like on\off button,switch kch km krke dega,agr switch ko on kr do to o kch km kar dega agr off kr do to oo km ni krke dega).
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