# include <stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("test.txt", "a");   // append ker dene pr 2 br mango add ho jayega (mtlb new data v add ho gya)

    fprintf(fptr, "%c", 'm');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'g');
    fprintf(fptr, "%c", 'o');


    return 0;

}