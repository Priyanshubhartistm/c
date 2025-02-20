// 2. call by reference
# include <stdio.h>

void _square(int*n);

int main() {
    // _square(&number);
    // printf("number = %d\n", number);

    return 0;
}

// call by reference

void _square (int*n) {
    *n = (*n) * (*n);
    printf("square = %d\n", *n);
}