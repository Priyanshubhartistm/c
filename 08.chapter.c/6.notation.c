# include<stdio.h>
void printstring(char arr[]);


int main () {
    char *canchange = "hello world";
    puts(canchange);
    canchange = "hello";
    puts(canchange);

    //char cannotchange[] = // never modefie a charater value.

    return 0;
}

void printstring(char arr[]) {
    for(int i=0; arr[i] != '\0' ;i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}