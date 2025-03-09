// Practice questions 68.
// allocate memory of five numbers, then dynamically increase it to 8 numbers.
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int));

    // ptr[0] = 1;
    // ptr[1] = 2;
    // ptr[3] = 3;

    printf("enter numbers(5) : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);
    printf("enter numbers(8) : ");
    for(int i=0; i<8; i++) {
        scanf("%d\n", &ptr[i]);
    }

    // print
    for(int i=0; i<8; i++) {
        printf("number %d is %d\n", i, ptr[i]);
        
    }



    return 0;
}