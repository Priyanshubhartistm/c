// pratice qs. 45
// write a program to store the first n fibonacci nus.

# include <stdio.h>

int main() {
    int n;
    printf("enter n (n<2):");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[0] = 1;

    for(int i=2; i<n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d \t", fib[i]);
    }
    printf("\n");
    return 0;


}