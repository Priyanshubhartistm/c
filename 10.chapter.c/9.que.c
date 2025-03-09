// Practice question 61.
// Make a program to read five integers from a file.
# include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    int n;
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);

    fclose(fptr);

    return 0; 

}