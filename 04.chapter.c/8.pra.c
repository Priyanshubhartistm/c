// pratice Qs 15.
// print the sum of first n natural no.s.
/*
n = 4   1+2+3+4   = 10
n = 5   1+2+3+4+5 = 15

*/

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number : ");
//     scanf("%d" , & n);

//     int sum = 0;
//     for(int i=1; i<=n; i++) {
//         sum = sum + i;         // sum += i
//     }
//     printf("sum is %d\n",sum);

    // also , print them in reverse.

// or(int i=n; i>=1; i--) {
//     printf("%d\n",i);
// }
//     return 0;
// }


#include<stdio.h>
int main(){
    int n;
    printf("enter number : ");
    scanf("%d" , & n);

    int sum = 0;
    for(int i=1, j=n; i<=n && j>=1; i++, j--) {
        sum = sum + i;         // sum += i
        //printf("%d\n" , j);
    }
        printf("sum is %d\n" , sum);

        return 0;
    }