// Practice Qs8
//Print 1(true)or(false)for following statements:

/*
a) if it's sunday &(and) it's snowing->
#include<stdio.h>
#include<math.h>
int main(){
    int issunday =1;
    int issnowing =1;
    printf("%d\n",issunday && issnowing);
    return 0;
}

b) if it's a monday ||(or) it's raining-> true
#include<stdio.h>
#include<math.h>
int main(){
    int ismonday =0;
    int israining =1;
    printf("%d\n",ismonday || israining); // dono condtion me se koye v true ho to o/p true hi hoga
    return 0;
}

c) if a no. is grater than 9 & less than 100 -> true (2digit no.)
*/
#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("Enter no.:");
    scanf("%d",&x);
    printf("%d\n",x>9 && x<100);
    return 0;

}



