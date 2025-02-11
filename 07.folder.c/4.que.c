// Pratice Qs 21
// Print the factorial of a number n.
/*
1! = 1
2! = 1*2      = 2
3! = 1*2*3    = 6
4! = 1*2*3*4  = 24
*/

# include<stdio.h>
int main(){
    int n;
    printf("enter number : ");
    scanf("%d" , &n);

    int fact = 1;
    for(int i=1; i<=n; i++) {            // sum   = 0 (sum me 0 se initialize kro) multi = 1 (multiplication me 1 se initialize kro , bcz o*o = 0 hi hoga )
        fact = fact * i;

        }
        printf("final factorial is %d");
        return 0;
    }
