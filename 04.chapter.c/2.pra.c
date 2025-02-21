// pratice question 13.

// Print the no. from 0 t0 10.
/*
# include <stdio.h>
int main(){
    for(int i=0; i<=10; i=i+1) {                               // i=i+1 in short way we can write i++
    printf("%d \n", i);
    }
    return 0;
}
*/

// increment operator (++i,i++)

# include <stdio.h>
int main(){
    // increment ope. / decrement ope.
    // ++i/--i (pre incrment)
    // i++/i-- (post increment)

    int i=1;
    // printf("%d\n",i++);    // 1stly use i value then increase.
    printf("%d\n",i--);    // 1stly use i value then increase.

     printf("%d\n",i);

    // printf("%d\n", ++i);      // 1stly increment value then uses i.
    // printf("%d\n", i);
    
    return 0;
}