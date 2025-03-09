// Practice question 67.
// In question 65, free the memory allocated with calloc.
#include<stdio.h>
#include<stdlib.h>

int main() {
    float *ptr;
    ptr = (float*) malloc(5* sizeof(float));


ptr[0] = 1;
ptr[1] = 3;
ptr[2] = 5;
ptr[3] = 7;
ptr[4] = 9;

for(int i=0; i<5; i++) {

printf("%f\n", ptr[i]);
}

return 0;
}