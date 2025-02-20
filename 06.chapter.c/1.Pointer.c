// POINTER = A variable that stores the memory "address" of another variable.

// here decalre a pointer.
#include <stdio.h>

int main() {
    int age = 22;     // hmne ek variable banya.
    int *ptr = &age;  // uske liye hamne ek pointer banya(pointer usa memory location ko point krta h) age ki jo memory/location h,uska address apne andr store karwa liya 
    int _age = *ptr;   // ab agr use address pr jo values store h..usko access krna h.to (*ptr) pointer pr jo value store h..uski value hm ise nikal lenge, aur value hm new wale age me dal di ,

    printf("%d", _age);   // aur new wale age ko jb print karwya to purane wale value hamre pass opesh aa gyi, q ki wahi hmne isme store kra di thi(int _age = *ptr;), to 22 to hmre pass print hoke aa gya.
    return 0;
}