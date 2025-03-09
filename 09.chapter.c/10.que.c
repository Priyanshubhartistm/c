// pratice qs. 56
// enter address (house no, block,city,state)of 5 people.
# include <stdio.h>
# include <string.h>
//user defined
typedef struct student {
    int roll;
    float cgpa;
    char name[100];
} stu ;
typedef struct computerengineeringstudent {
    int roll;
    float cgpa;
    char name[100];
} coe;
struct address {      // struct ko kaise define krte h
    int houseNo;
    int block;
    char city[100];
    char state[100];
};


void printadd(struct address add);    // structure ko function ke andr kaise use krna h, 
int main() {
    struct address adds[5];       // structure k array kaise banan h
    // input
    printf("enter info for person 1 :");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%d", adds[0].city);
    scanf("%d", adds[0].state);


    printf("enter info for person 2 :");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("enter info for person 3 :");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("enter info for person 4 :");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("enter info for person 5 :");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block);
    scanf("%d", adds[4].city);
    scanf("%d", adds[4].state);

    printadd(adds[0]);
    printadd(adds[1]);
    printadd(adds[2]);
    printadd(adds[3]);
    printadd(adds[4]);
    

    return 0;
}
void printadd(struct address add) {
    printf("address is : %d, %d, %s, %s\n", add.houseNo,add.block,add.city,add.state);

}