// Pratice Qs. 38
// Swap 2 number, a & b.
# include <stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);

int main() {
    int x = 3, y = 5;
    //swap(x,y);
    _swap(&x,&y);
    printf("x = %d & y =  %d\n", x, y);
    return 0;
}

// call by reference  = y tb use krte h..jb hame function se multiple value return krwate h..(un value ko hm return ki help se return ni krwte h,pointer ki help se return krwate h)

void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
// call by value
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b =  %d\n", a, b);
}