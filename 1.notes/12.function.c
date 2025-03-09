// chapter -5
// FUNCTION = Block of code that performs particular task.example:- tv ka remote usme bht sare button hote h..jo kise v particular function ko run krta h..

/*
and simplicity ke liye ek function ka kam ek hi hota h..jaise ek function h usko volume badhani h..to o bs volume hi badhya g..km ni karega y mute ni karega.

>> ise trh se hr ek C "function" k ek km hota h..or o wahi kam krta h..dusara km hm use karwane ki kosis ni krte h..ni to program hamra complex hota jata h..

i) it can be used multiple times            = tv ke button me kitni v br volume km,jada kr skte h..(ek fun.ek hi km ko multiple times kr skta h)

ii) increase code readability               = c me agr "hello world" 3 br se jda print karna h..to uska function bana denge.

isliya br br ek bada code ko likhne ki jhugh hm usko chote se function me simplyfie kr skte h..jiski wjh se code ki readability badh jati h..

>> SYNTAX 1 :-
Function Prototype                = prototype ki wajh se hm c compailer ko bata rahe h.. ki hm function likhne wale h..ise line ki help se yani (prototype ki help se hm bata pate h..ki hm function likhne wale h..)

** that is called function declaration and prototype.


void printHello();                = ye jo (printHello) h..o hmre function k nm h..function k nm kch v ho skta h..bcz function v variable ki nm ki trh user defined h..

y line compiler ko btati h..ki hmra jo function jo h..oo exists krta h..

** y declaration k syntax h.

i) void                          = means khali ; void kch v return ni karega means result ni dega..but oo km krega. Hello print kra dega.

i) {()} 2 paranthesis , and
ii) {;} statement terminal last me laga denge.


>> SYNTAX 2 :-
Function Definition               = ek br hamne compiler ko bata diya ki function exists krti h..to function likhna to padega. function k km to dikhye ki function km kaise krta h.. use statement ko khte h.."Function Definition"

void printHello(){
printf("hello");
}

i) void                          = sbse phle likhte h..hm return type.yani oo kya value return krega,uska kya type h.. yaha pe kch return ni krega isliya (void )likha h.

ii) printHello                  = fir likhenge function k nam.

iii) ()                         = iske bd paranthesis likhenge.

iv) {}                          = iske bd curly barcesis.         

v) printf("hello");             = jo v kch print karna h..o likhenge ab . "y block h, hmra jaha sara k sara code exists krega"


>> SYNTAX 3 :-
Function call                     = y 3rd syntax h..jisko hm function call khte h..

** function call krta kya h?      = hmne compiler ko bata diya ki hm function banana chahte h.. fir function bana v diya ab ise function ko "use" kaise kre to function ko jo use krne ka jo km hota h.. that is called "Function call" mtlb fun. ko bulana.ism

** fun. ko y to hm int main se main fun. se call laga skte h..y kise or fun. se call laga skte h..

to yaha pe hm main fun. se dusare fun. ko bula rahe h..

int main(){
printfHello();            
return 0;
}

i) printfHello();            = hmra jo printHello fun. h.uska nam likh denge,

ii) ();                      = paranthesis or terminator laga denge to y ban jayegi hmri "calling statement" jo hmne "int main" ke andr likhi h..

** main v ek function h..jiska return type :- "int" h..q ki int value return krta h..yani 0(zero)

** iska nm h..main jo ki ek "keyword" h..baki jo sare fun. ke nm honge o banyenge oo sb keyword ni honge.



*/