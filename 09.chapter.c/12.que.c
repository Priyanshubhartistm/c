// Practice question 58.
//create a structure to store complex numbers. Use arrow operator.

# include<stdio.h>
# include<string.h>

struct complex{
    int real;
    int img;

};

int main () {
    struct complex number1 = {5,8};
    struct complex *ptr = &number1;
    printf("real part = %d\n", ptr->real);
    printf("img part = %d\n", ptr->img);

    return 0;


}