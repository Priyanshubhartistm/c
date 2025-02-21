// Pratice Qs.20
// Print all the ODD no.s from 5 to 50.

#include<stdio.h>
int main() {
    for(int i=5; i<=50; i++) {
        if(i % 2 != 0){
            printf("%d\n" ,i);
        }// odd
        
    }
    return 0;
}