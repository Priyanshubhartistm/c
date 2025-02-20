// Pratice  q   s.37
// Print the value of 'i' its pointer to pointer.
/*
jb v value nikalni ho * ko yaad rakhna h
jb v address nikalni ho & ko yaad rakhna h

int i    = 5;
int *ptr = &i;
int **pptr = &ptr;

*/

# include <stdio.h>

int main() {


    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n",**pptr);

    return 0;

}