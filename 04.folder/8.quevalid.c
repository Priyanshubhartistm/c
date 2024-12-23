// Are the following valid or not?
/*
a) int a = 8^8 

#include<stdio.h>
#include<math.h>
int main(){
    int x =8^8;
    printf("%d",8^8);  // valid
    return 0;
}
b) int x; int y=x;

#include<stdio.h>
#include<math.h>
int main(){
    int x; 
    int y=x;           // valid
    printf("%d",x);
}
c) intx,y=x;
#include<stdio.h>
#include<math.h>
int main(){
    int x,y=x;     // valid
    printf("%d",x);
}

d) char stars = '**';
*/
#include<stdio.h>
#include<math.h>
int main(){
    char stars = '**';   // invalid bcz,string ke andr single character hi store kar skte (bcz,multiple char dalne pe y memory ke andr itni space le leti h..jo char ko jugh di jati h..use badi hoti h.. )  h..but yaha pe multiple character h..so y unvalid h..
    printf("%d",stars);
    return 0;
}