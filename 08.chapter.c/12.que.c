// pratice qs.50
// take a string input from the user using %c.

# include <stdio.h>
# include <string.h>

void printstring(char arr[]);
int countlenght(char arr[]);

int main () {
    char str[100];
    char ch;
    int i = 0;

    while(ch != '\n') {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);

    return 0;
}
int countlenght(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] != '\0' ;i++) {
        count++;
    }
return count-1;
}

void printstring(char arr[]) {
    for(int i=0; arr[i] != '\0' ;i++) {
        printf("%c", arr[i] );
    }
printf("\n");

}