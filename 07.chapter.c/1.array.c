# include <stdio.h>

int main () {
    // int marks1 = 98;
    // int marks2 = 97;
    // int marks3 = 96;

    // int marks[] = {98,97,96};

    int marks[3];
    printf("enter phy : ");
    scanf("%d", &marks[0]);

    printf("enter chem : ");
    scanf("%d", &marks[1]);

    printf("enter math : ");
    scanf("%d", &marks[2]);
    //scanf("%d", &marks[3]); // 2,ke bdle [3] likh denge isme to o/p abort kr jyega mtlb(end ke gya)bcz y runtime error h,y compiler ni check kr payaga, jb aap aysi mistake kr dete h,array ki size si badi chiz access kr rhe h, to compiler apko ni batyega ki aap mistake kr rhe h, apka program run runtime me btyega or wahi pr rok dega, 

    // isliya kvi v maxium index ke size se aage ni jana h

    printf("phy = %d, chem = %d, math = %d", marks[0], marks[1], marks[1]);

    return 0;
}