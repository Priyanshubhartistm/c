// Pratice Qs. 39
// Will the address output be same?

// 1. call by value
// # include <stdio.h>

// void printAddress(int n);

// int main() {
//     int n = 4;
//     printAddress(n);
//     printf("address of n is : %u\n", &n);

//     return 0;
// }
// void printAddress(int n) {
//     printf("address of n is : %u\n", &n);
// }

// call by value ke andr jaha pr memory address alg alg h, hmri values copy hoti h.

// call by reference me value same rhti h.

// 2. call by reference

# include <stdio.h>

void printAddress(int *n);

int main () {
    int n = 4;
    printAddress(&n);
    printf("address of n is : %u\n", &n);
    return 0;
}

void printAddress(int *n) {
    printf("address of n is : %u\n", n);
}
// yaha pr jo output ke andr jo 2 address h,o dono same h aye h, q ki call by refernce kiya h,mtlb ab memory location ki bate chal rahi h.
// ab direct use plot ki bat kar rhe h, jiska address hame pata h.ab use variable ki nm ki bat ni chal rahi h,

// call by reference me value same rhti h.