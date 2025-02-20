// Pointer in function call
// 1.  call by value
# include <stdio.h>

void square(int n);

int main(){    // example:- whatsapp pe dost ko mes krte h,to o recive hone ke bd delet kre y save kre, but hmra trf se mes me koye change ni hoga.
    int number = 4;      // hm ek main function h
    square(number);
    printf("number = %d\n", number);
    return 0;
}

// call by value
void square(int n) {       // dost hmra square fun.h(o kch v kre hmra trf se main fun. change ni hoga)
    n = n*n;
    printf("square = %d\n",n);
}