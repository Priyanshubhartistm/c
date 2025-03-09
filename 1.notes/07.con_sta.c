/*
for example some toughts like if light h.. to print karwan "day" , and dark h..to print karwana "night" to yasi yasi chiz hoti h..kvi kabhar code me likhni pdti agr hm market se cloths,gadtets kharidte h..to tax bharte h..but kvi books pe ni to ise hisab se apko software deside krega ki kitna tax lagega to ise trah ke jo program h.."inme condition kafi check hoti h"

>> PHLE DEKHA JAYEGA KI ANDHRA H,Y LIGHT H..FIR BATYE JYEGA KI KYA PRINT KRNA H..

>> PHLE DEKHA JAYEGA KI ITEM KN S FIR BTYA JYEGA KI USEPR KITNA TAX LAGEGA ..

*/
/*
1. CONDITIONAL STATEMENTS HAVE TWO PART:-
i) IF-Else    =

**  jab v hamra flow of program banta h..n to hm ise trh sbse upr
> if                   =    agr ye condition sach ni h..to dusri check hogi.            
> else if              =    agr ye bhi condition sach ni h..to tesri check hogi ...if y sach ho gyi to koye v condition ceck ni hogi..
> else if              = agr upr wala sb false h..to kch v check ni hoga..
> jitne v else if likhna chahte ho
> else                = to fir last wala (else)"else" me kch check ni hota..else me upr wale sb false h..to jo km bacha h..sb ho hi jata h..without checking.


** agr ham chahte h..ki hmri sari ki sari condtition check ho to ,use case me ham bht sari (if)likhte h..

> if             = ye check hoga agr true h.to check hoga ni h..to ni hoga

> if             = fir y check hoga agr true h.to check hoga ni h..to ni hoga ; isko upr wala true/false tha use koye frk ni pdta h..to jb upr wali condtion se niche wali condtition ko frk n pade to ("if")br br likhte jao

** agr hamra "if" true ni hota to uske baad hame check krni h..ki koye or condition true h..kya to hm likhte "else if"

> else if       = agr upr wali condtion se frk pad raha h..to jaise marks hme check karne h..to upr 
                   agr ek br (A++) print ho gya to niche (A++) print n ho iska dhyan rakhe..isliya usme hm else if use krenge..to else if ke liye ek format :-
#include<stdio.h>
#include<math.h>
int main(){
    int age;
    printf("enter age");
    scanf("%d",&age);

    if(age>=18){
        printf("adult\n");
    }
    else if(age>13&&age<18){
        printf("teenger\n");
    }
    else{
        printf("child");
    }
    }

ii) Switch    = this is a type of conditional operator. if pankhe ka swtich on kr do to kch km kar dega ;if off kr do kch km ni krega.usi trh se coding ke andr swtich hota h..jiski agr apne condition "ON" kr di to oo apko km karke de dega,ni kri to km ni krkr dega..

SWITCH PROPERTIES:- 
A) Cases can be in order                                      = without sequence me v likh skte h..yaha pe switch hame koye error ni dega.      
B) Nested switch (switch inside switch) are allowed           = switch ke andr me hm or v switch laga skte h..like:- day nam k ek switch laga diya or o prove ho gya to hm ,ek or switch laga denge,"year" ka ki year kn s chal raha h..
           switch(day){
            case1: switch(month){
            case2:
    }
        }

SWITCH = ko likhne ka syntax

switch(number){
case C1:        // do something
    break;
case C2:        // do something
    break;
default:       // do something
}

i)switch  = sbse phle likhte "keyword"uske andr
ii)number = hm likhte h..kch "number"
, "character" swtich basically use no. ya char se kch constant ko match karta h.. jaise no. apne de diya age fir constant hamra ho gya 1,2,3,4,5,6,7,8,9 alltho y bht practical case h..swtich ke liye ise trh se hmre bht sare constatnt no. ho gye , to o apke age ko jis v case me match kr dega (mtlb 1 ke sath usne apke age ko match kr diya, apne age me 1 dala tha usne 1 ke sath usko match kar diya to uske age jo v likha hoga oo use km ko apko karke de dega )to ise trike se apne uska swtich on kr diya case match karwa ke fir o apko"km krke de dega"

iii) case C1:               = fir oo cases check krte h..yaha pe hm case ke bd,(C1) constant likhte h..like:- case1,2,3,4,5,case'a',case'b'... uske bd hme (:)colan lagana h..

iv) do something            = fi apni jo v statement o likh do 

v) break;                   = or last me break jrur likhna h..break k km hota h..case ke bd bhar niklna apko (swtich) se,agr y break ni hoga to niche wali upr wali sari ki sari statement print ho jayegi..

if apne break ni likha to sare ke sare swtich on ho jayegi..agr apko sare swtich on ni karna h..to 1st (swtich) ke bd hi break laga do.

vi) default:                 = last case hota h..default case ;if upr wala kch v ni hua to y (default) print kr do.
y if,else if ki trh hota h..ki y dono print ni hua to else kr do,isme swtich k else hota h"default"













*/

