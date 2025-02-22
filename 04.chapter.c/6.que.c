// Pratice Qs. 23
// Calculate the SUM of all numbers b/w 5 and 50.(including 5 & 50)

#include<stdio.h>
int main(){
    int sum = 0;
    for(int i=5; i<=50; i++) {
        sum += i;
    }
    printf("sum is %d" , sum);

    return 0;
}