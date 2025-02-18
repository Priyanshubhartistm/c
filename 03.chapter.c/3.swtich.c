// for a number 

// #include<stdio.h>
// int main(){

//     int day;   // 1-mon; 2-tues;3-wed
//     printf("enter day(1-7):");
//     scanf("%d",&day);

//     switch (day){
//         case 1: printf("monday\n");
//         break;

//         case 2: printf("tuesday\n");
//         break;

//         case 3: printf("wednesday\n");
//         break;

//         case 4: printf("thuresday\n");
//         break;

//         case 5: printf("friday\n");
//         break;

//         case 6: printf("saturday\n");
//         break;

//         case 7: printf("sunday\n");
//         break;

//         default: printf("not a valid day!\n");

//     }

// return 0;
// }

// for a character
#include<stdio.h>
#include<math.h>
int main(){
    char day;   //m-mon,t-tues,w-wed,T,f,s,S
    printf("enter day(1-7):");
    scanf("%s",&day);

    switch(day){
        case 'm':printf("monday\n");
        break;

        case 't':printf("tuesday\n");
        break;

        case 'w':printf("wednesday\n");
        break;

        case 'T':printf("Thuresday\n");
        break;

        case 'f':printf("friday\n");
        break;

        case 's':printf("saturday\n");
        break;

        case 'S':printf("sunday\n");
        break;

        default:printf("not a valid day!");

    }


return 0;
}