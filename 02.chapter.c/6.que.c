// write a program to check if a number is divisible by 2 or not.

// x= 5,6,10

#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    printf("%d",x%2==0);  // yaha pr arithmetic operator ko combined krenge relational operator ke sath (x ka module , niklega 2 kke sth agr o value 0 ke equal hoti h..to print hoga..2 yani '1' ; mtlb divide ho jata h..agr ni hua to print hoga '0' ) 5%2 ke sath divide ni hota h..to output(1)hoga;wahi 10%2 ke sth hoga divide to output(1)
    return 0;
}