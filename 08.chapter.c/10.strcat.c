//concate
# include <stdio.h>
# include <string.h>

void printstring(char arr[]);
int countlenght(char arr[]);

int main () {

    char firststr[100] = "hello";
    char secstring [] = "world";
    strcpy(firststr, secstring);
    puts(firststr);
}