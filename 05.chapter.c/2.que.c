// Pratice  qs 27
// Write 2 functions - one to print "Hello" & second  to print "good bye".

# include <stdio.h>
// declare
void printHello();
void printGoodbye();

int main() {
    printGoodbye();     // jis v fun. ko pahle call krenge oo phle execute hoga.
    printHello();         // function call
    printGoodbye();
    
    return 0;
}

// function definition
void printHello(){
    printf("Hello\n");
}

void printGoodbye() {
    printf("Goodbye\n");
}