// Practice question 69
// create an array of size five (using calloc) and enter its value from the user.
#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int));

    printf("enter numbers(5) : ");
    
    for(int i=0; i<5; i++) {
        scanf("%d", &ptr[i]);
    }

    // print
    for(int i=0; i<5; i++) {
        printf("number %d is %d\n", i, ptr[i]);
        
    }



    return 0;
}