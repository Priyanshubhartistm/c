// Pratice Qs 32
// Write a function to convert calsius to fahrenheit.

/*
f   = (c*9\5)+32
    = (0*0.18)+32   = 32degree f
*/

#include <stdio.h>
float convertTemp(float celsius);

int main() {
    float far = convertTemp(37);
    printf("far : %f" ,far);
    return 0;

}

float convertTemp(float celsius) {
    float far = celsius * (9.0/5.0)+ 32;
    return far;
}