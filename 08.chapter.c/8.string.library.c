# include <stdio.h>
# include <string.h>

void printstring(char arr[]);
int countlenght(char arr[]);

int main () {
    char name[] = "priya";
    int lenght = strlen(name);
    printf("lenght is : %d", strlen(name));   // yaha pr call lagyi h,string length ko


    return 0;
}
int countlenght(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] != '\0' ;i++) {
        count++;
    }
return count-1;
}

void printstring(char arr[]) {
    for(int i=0; arr[i] != '\0' ;i++) {
        printf("%c", arr[i] );
    }
printf("\n");

}