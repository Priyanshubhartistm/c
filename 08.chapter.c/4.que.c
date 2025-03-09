// pratice qs. 48
// ask the user to enter their firstname & print it back to them.


// Also try this with their fullname.

# include <stdio.h>

void printstring(char arr[]);

int main() {
    char fullname[100];
    scanf("%s", fullname);
    printf("your full name is : %s", fullname);
}

void printstring(char arr[]) {
    for(int i=0; arr[i] != '\0' ;i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}