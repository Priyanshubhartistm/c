// Pratice Qs. 34
// Write a function to print n terms pf the fibonacci sequnce.

/*
febonachi sequence are most important sequence.how to find out febonachi sequence (previous 2 no. add) 

example :- 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,........

*/
#include<stdio.h>
int fib(int n);

int main() {
    fib(6);
    return 0;
}

int fib(int n) {
    if(n == 0 ) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int finN = fibNm1 + fibNm2;
    printf("fib of %d is : %d\n", n);
    

}