// Pratice Qs. 30
// sum of first n natural no.s
/*
n      ----->  1+2+3+4.....n-1+n.  = sum(n-1)+n
n=5    ----->  1+2+3+4+5           = sum(4)+5 yani ki 4 tak kasum nikal lo or fir isme add kr do 5.
n=4    ----->  1+2+3+4             = sum(3)+4
n=3    ----->  1+2+3               = sum(2)+3 or sum(n-1)+2
n=2    ----->  1+2                 = sum(1)+2
n=1    ----->  1                   = last value yaha hmri recursion khtm ho jayegi..is ko hm (base case) khte h..
*/

#include <stdio.h>

int sum(int n);

int main() {
    printf("sum is : %d", sum(5));
    return 0;
}

// recursive function
int sum(int n) {
    if(n == 1) {
        return 1;
    }
    int sumNm1 = sum(n-1); // sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}