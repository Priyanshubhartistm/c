// Pratice Qs.28
// write a function that "Namaste" if user is indian & "Bonjour" if the user is french.

# include <stdio.h>
// declare 
void namaste();
void bonjour();

int main(){
    printf("enter f for french & i for indian : ");
    char ch;
    scanf("%c" , &ch);

    if(ch == 'i') {
        namaste();
    }else {
        bonjour();
    }
    return 0;
}

// definition
void namaste() {
    printf("namaste\n");
}

void bonjour()  {
    printf("bonjour\n");
}