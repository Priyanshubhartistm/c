// pratice qs. 54
// check if a given charater is present in a string or not.
/*
str = "hello world"
char ch = 'w'   = yes      // yes or not
char ch = 'l'   = no 
*/
# include<stdio.h>
# include<string.h>

void checkchar(char str[], char ch);

int main() {
    char str[] = "priya";
    char ch = 'y';
    checkchar(str,ch);
}
void checkchar(char str[], char ch) {
    for(int i=0; str[i] !='\0'; i++) {
        if(str[i] == ch) {
            printf("charater is present !");
            return;
        }
    }
    printf("charater is not present: (");
}