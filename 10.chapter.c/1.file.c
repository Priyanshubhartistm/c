
# include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("test.txt", "r"); //Opening a File
    fclose(fptr);                  // Closing a File (kch krna ni to close kr diya)
    return 0;
}