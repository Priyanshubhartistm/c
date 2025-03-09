# include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("newtest.txt", "w"); // "r" mode me:- doesn't exist ayega, wahi agr 'w'mode kr diya to ek file khud creat ho gya newtest.txt ke nm se
    if(fptr == NULL) {
        printf("file doesn't exist\n");
    }else {

        fclose(fptr);

    }
    
    return 0;
}