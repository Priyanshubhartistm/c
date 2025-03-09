// Practice question 60.
// make a structure to store bank account information of a customer of ABC Bank.also, make an alias for it.

# include <stdio.h>
# include <string.h>

typedef struct bankaccount {
    int accountno;
    char name[100];
} acc;

int main () {
    acc acc1 = {123, "priyanshu"};
    acc acc2 = {123, "priya"};
    acc acc3 = {123, "riya"};

    printf("acc no = %d\n", acc1.accountno);
    printf("name = %s", acc1.name);

    return 0;
}