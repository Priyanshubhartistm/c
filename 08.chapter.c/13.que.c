// pratice qs.51
// salting:-

// find the salted from of a password entered by user if the salt is "123" & added at the end.
/*
password = "test"
salt = "123"
new password  = "test 123"


*/
# include <stdio.h>
# include <string.h>

void printString(char arr[]);
int countlength(char arr[]);
void salting(char password[]);

int main () {
    char password[100];
    scanf("%s", password);
    salting(password);
}
void salting(char password[]) {
    char salt[] = "123";
    char newpass[200];

    strcpy(newpass, password); // y ek library function h..
    strcat(newpass, salt);  // or y v
    puts(newpass);
}
int countlength(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] !='\0'; i++) {
        count++;
    }
    return count-1;
}
void printString(char arr[]) {
    for(int i=0; arr[i] !='\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}