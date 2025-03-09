# include <stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("test.txt", "r"); 
    
    printf("%c\n", fgetc(fptr));

    return 0;

    fclose(fptr);

}
