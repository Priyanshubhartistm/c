// pratice qs. 47
// create a string firstName & lastName tos tore details of user & print all the character using a loop.

# include <stdio.h>
void printstring(char arr[]);  // ek function bana lete h,string ko print krwane ke liye.

// yaha pr array ka size ni denge q ki normally string waha pr khtm ho jati h, jaha pr null character aa jata h..

// normal array ke andr pta hi ni hota h,ki element kitna h..but string ke andr jaise hi null charater aa jata h,hme pta chal jata h.ki hmra string khtm ho jata h..

int main() {
    char firstName[]="priyanshu";
    char lastName[]="bharti";

    printstring(firstName);
    printstring(lastName);


    return 0;
}
void printstring(char arr[]) {
    for(int i=0; arr[i] !='\0';i++) { // loop me hmesa null char ko add krna h..
        printf("%c", arr[i]);

    }
    printf("\n");
}