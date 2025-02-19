// pratice Qs.12

/*
write a program to find if a character entered by user is upper case or not.

*/

#include <stdio.h>
int main(){
    char ch;
    printf("enter charater:");
    scanf("%c",&ch);

    if(ch >= 'A' && ch<= 'Z'){
    printf("upper case");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("lower case");
    }
    else {
        printf("not english letter");
    }

}