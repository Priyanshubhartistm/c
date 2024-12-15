// 1. VARIABLES:- variable is the name of a memory location which stoes some data.variable data are always changable.

/*Rules
a. Variable are case sensitive       = A,a are different.
b. 1st character is alphabet or '_'  = A to z char only,_
c. no comma/blank space              = int final_price (not use this type:- final-type)
d. no other symbol other than'_'     = 
e. Variables name are always meaningful = number,star,age,course,pi.(jo v kch likhe usko samjh sake ek br me padhte hi)*/


// 2. DATATYPES:-

/*c ke andr boolean,string,pointer,class,objects y sb missing h..bcz c language are very old lan,sbse phle ayi thi;that's why this is a mother of all language,c come in 1970s.
i) char or signd char - 1
ii) unsigned char - 1
iii) int or signed int - 2
iv) unsigned int - 2
v) short int or unsigned short int - 2
vi) signed short int - 2
vii) long int or signed long int - 4
viii) unsigned long int - 4
ix) float - 4
x) double - 8
xi) long double - 10*/



// 3. CONSTANTS:- values that don't change(fixed)

/*i) integer constants  = 1,2,3,0,-3,-2,-1 (if int cost ki value 1 h..to 1 hi hoga 0 ni h) 
ii) real constants       = 1.0(ab 1.0 ,1 v hota h..but ye real constants h..isko dikhne ke liye iska point .0 extra likha gya h;agr y 2 hota to y integer const ho jata  ),2.1,3.14,-2.4 (jiske andr real no. hote h)
iii) character constants  = 'a','A', ; special char:- '&','#','@','$','%' (single quotes lagakr character constants likhenge ) */


// 4. KEYWORDS :-reserved words that have special meaning to the compiler.(jiska meaning sirf compiler ko pata h)
// 32 keyword in c.


// 5. Program structure in c:-
#include<stdio.h>              // header file/preprocessor
int main(){                      // 
    printf("hello world");      // y wala part ko code ke andr kvi v kahi v change kr sakte h..
    return 0;                  // mtlb 0 error dikhta h..means apke code me 0 error h.succesfully execute ho gya.
}


// 6. Comments :- lines that are not part of program.
// i) single line      = //
// ii) multiple line   = /*  */

// this is my single line comments.

/*
this is my multiple line comments
*/


// 7. HOW TO SHOW OUTPUT IN C:-
/*
printf("hello world");           = printf hamre liye kch v print kara dega.

printf("hello priya"\n)
printf("hello priya"\n)
printf("hello priya"\n)
printf("hello priya"\n)           = isko alg alg line me print karne ke liye hm back slash 'n' likhenge.
*/

/* for output print cases:-
1. integers
printf("age is %d",age);               = 'd' dikhta h..double value ko d,datatype hota h..

2. real numbers
printf("value of pi is %f",pi);

3. characters
printf("star looks this %c",star);

NOTE:-in 3ko hm khte h..formete specifier.means y specify krte h..ki op kis format me ayega.

y jo 'printf' function h..y hmra liberay fun hh,jo hme by default paros diya jata h.
*/


// 8. HOW TO SHOW INPUT IN C:-
/*scanf("%d",&age);          = scanf ek library function h.

i) %d   = hme dikhte h..ki int type ki value ko input lene wale h..

ii) sbse phle quotes laga denge. ""  ,use quotes ke andr apna format specifier laga denge. 

iii) uske bd lagyenge ek comma (,)comma ke bad likhna h..ki ye jo value input le rahe h..uska type to hamne samjh liya,ab usko kn se variable me store karna h..to likhenge apne variable ka nm

iv) or use variable ke name se phle hm & (amprsend laga denge)yani y '&' ek (address) h...y ise variable ka address h.y kya karega memory ke andr jaha par age ko memory ka block diya gya h..use address pe jyega jo v input hamre pass aayega usko address pr jake store kara dega.to kch ise trh k km rhta h..scanf ka

*/
# include<stdio.h>

int main(){
    int age;
    printf("enter age");
    scanf("%d", &age);
    printf("age is : %d",age);
    return 0;
}  // input:- (enter age) ab yaha pe age enter krenge 22 iske bd 
// output ayega (age is : 22)