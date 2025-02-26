// PRATICE qS. 31
// Fatorial of n.
/*
5!   = 1*2*3*4*5 -----> 4!*5
4!   = 1*2*3*4   -----> 3!*4
3!   = 1*2*3     -----> 2!*3
2!   = 1*2*      -----> 1!*2
1!   = 1

fact(n) =fact(n-1)*n

*/
#include <stdio.h>
int fact (int n);

int main() {
    printf("factorial is : %d", fact(5));

    return 0;
}
int fact (int n) {
    if(n ==0) {
        return 1;
    }
    int factNm1 = fact (n-1);
    int factN = factNm1 * n;
    return factN;
}