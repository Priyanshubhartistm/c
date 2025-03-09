// dictionary banate time letter ko use or arrange krne ke liye,
# include <stdio.h>
# include <string.h>

void printstring(char arr[]);
int countlenght(char arr[]);

int main () {

    char firststr[] = "HHHA";
    char secstring [] = "HHHB";
    printf("%d\n", strcmp(firststr,secstring));

    return 0;}