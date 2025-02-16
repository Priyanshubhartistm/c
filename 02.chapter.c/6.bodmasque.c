//i)   5*2-2*3           // 10-6=4
//ii)  5*2/2*3           // 10/2*3 = 15
//iii) 5*(2/2)*3         // bracket sbse phle solve hoga yani 5*(1)*3 =15
//iv)  5+2/2*3           // (*,/) ka same precedence h..to left to right
                         // 5+(2/2)*3 = 5+(1)*3 = 15


#include<stdio.h>
#include<math.h>

int main(){
    int a = 5*2-2*3; 
    int a = 5*2/2*3;  
    int a = 5*(2/2)*3;   
    int a = 5+2/2*3; 
    printf("%d \n",a);
    return 0;
}