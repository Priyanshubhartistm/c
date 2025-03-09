# include <stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("test.txt", "w");

    fprintf(fptr, "%c", 'm');  // file k y jitna v data h means(mango)usko replace kr dete h, (test.txt) file se.
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'g');
    fprintf(fptr, "%c", 'o');


    return 0;

}