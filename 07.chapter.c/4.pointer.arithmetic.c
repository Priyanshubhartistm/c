// case 1
// # include <stdio.h>

// int main() {
//     int age = 22;
//     int *ptr = &age;
//     printf("ptr = %d",ptr);
//     ptr++;
//     printf("ptr = %u", ptr);
//     return 0;
// }

// case 2
// # include<stdio.h>
// int main() {
//     float price = 100.00;
//     float *ptr = &price;
//     printf("ptr = %u\n", ptr);

//     ptr++;
//     printf("ptr = %u\n", ptr);

//     ptr--;
//     printf("ptr = %u\n", ptr);

//     return 0;
// }

// case 3
// # include<stdio.h>
// int main() {
//     char star = '*';
//     char *ptr = &star;
//     printf("ptr = %u\n", ptr);

//     ptr++;
//     printf("ptr = %u\n", ptr);

//     ptr--;
//     printf("ptr = %u\n", ptr);

    

//     return 0;
// }

// CASE 4

# include <stdio.h>

int main() {
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u, %udifferent = %u\n", ptr-_ptr);
    _ptr = &age;

    printf("comparision = %u\n", ptr == _ptr);

    return 0;
}