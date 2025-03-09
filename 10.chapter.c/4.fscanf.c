# include <stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("test.txt", "r");


    int ch;             // for integer value
    fscanf(fptr, "%d", &ch);
    printf("character = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("character = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("character = %d\n", ch);
    

    // char ch;                  //for char value
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);

    fclose(fptr);
    return 0;
}