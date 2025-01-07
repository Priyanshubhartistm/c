// TERNARY OPERATOR
/*
ave jo hamne if,else if wala code kara(condtional statement file me)o 6 line me tha
to isko single line me krne k tarika hota h.. "ternary operator"

SYNTAX OF TERNARY OPERATOR :-

condition ? dosomething if TRUE : doSomething if FALSE;

i) condition   = sbse phle to apni condition bta do,ki kya condition h..

ii) ?          = uske baad question mark laga do ,y question mark k km hota h..ki o check krega ki apki condition sahi h..y ni 
> if agr apka condition true return krega to

iii) dosomething if TRUE     = to fir yaha pe jo v likha hoga oo execte ho jayega.

iv) :(colan)                 = iska mtlb hota h..ni to age wala hoga(yani false)

v) doSomething if FALSE;     = y print ho jayega..

for example:- 
*/
#include<stdio.h>
int main(){
    int age;
    printf("enter age:");
    scanf("%d",&age);

    age>=18 ? printf("adult\n") : printf("not adult\n");
}