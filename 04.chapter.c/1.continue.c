// continue statement   = skip to next iteration

// #include <stdio.h>
// int main(){
//     for(int i=1; i<=5; i++) {
//         if(i == 3) { // skip krna h..3 ko
//         continue;

//         }
//         printf("%d\n" , i);
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    for(int i=1; i<=10; i++) {
        if(i == 6) {
            continue;
        }
        printf("%d\n" , i);
    }
    return 0;
}