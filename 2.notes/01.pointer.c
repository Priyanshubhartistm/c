// POINTER = A variable that stores the memory "address" of another variable.

/*
like hm kya krte the jb v koye variable store krte the to yase krte the.int age = 22;

hm memory ke andr ek variable bana lete h..

int age(variable) = 22(value);

<< SYNTAX :-
int age = 22;         = normal variable
int*ptr = &age;       = pointer variable


jb v ek pointer banate h:-  int*ptr = &age;
- to "int" ke sath asthetic(*) lgate h.. 
- fir hm apne pointer variable k nm lagate h..
- fir equal to =.
- fir ampersand(and k symbol) &.
- fir age


pointer variable banane ke liye * astatic lagate h..pointer variable ke synatx me.aur isko kya assign kr diya address of age;
- yani age k jo v address tha o ise pointer ke andr jake store ho gya.

int*ptr = &age;       = pr jb v ham ek pointer banate h..to uske liye 
- ek asthetic(*) lagate h..
- fir hm apne pointer variable k nm likhte h.
- fir equal to =.
- fir ampersand &.
- fir age.

y ptr(pointer) ek variable h.. jo ise age ka "address" store krwyega.

yaha pr hm do nayi chize sikhenge :-
i)  * (y jo star h..isko hm bolte h)        = value at address operator.(jiske v samne hm y * star laga dete h..hme uska "value" mil jati h )

ii) & (y jo ampersend h..isko hm bolte h)   = address of operator.(jiske v samne hm y & and laga dete h..hme uska "address" mil jata h )

iska kya matlb hua, hmne yaha pe ek pointer variable banya, kaise pata chala y ek pointer variable h?    = yaha pe hamne ek * (asthetic) lagya.

or usko address of age assign kar diya, ab age k jo v address tha o ise pointer ke andr store ho gya,

yani memory ke andr ye location aa gyi jaha pr pointer variable aa gya jaha pr store ho gya age character (2010) 

>> agr hm dekhna chahe pointer jis address ko store kara raha h.waha pr kya value stored h..to uske liye hm use kr skte h,y wala operator 

int_age = *ptr;

- jaha pe new variable bana rahe h..(_,underscore) jiske andr hm store kara rhe h.. 

- value at address (ptr) yani pointer ke andr jo v address h.uski value nikal lo or new variable me store kr do.

- to kya hoga sbse phle new variable banega, 
jiska nm hoga (_age) iska kch opr address ho skta h..man lijiye 2011.

- ab iske andr pointer pr jo v address store h.. uski value yani (*ptr;)value at address; which is told as pointer.

- pointer me address told h..2010.

- to ab hm 2010 me jayenge dekhenge ki waha kn si value h..to pointer ke pass told h..value 2010,

- aur 2010 pr kn si value store h.22

- ab use 22 value ko hm utha ke le ayenge or new wale (_,underscore age) me dal denge.

NOTE :- int *(int star jaise hi likhenge to pointer ko store karwane wala variable aa jayega)

ab agr yaha pr (* ptr) pr jo address h..use pr 
rakhi hui value ko access krna h..to uske liye 
use karenge star(*) operator. that's called "value at address".

yani y use pointer me store jo value hoga uski value ko nikal kr de dega,to isne 2010 ki value yani 22 ko nikal kr y le aye or

aur 22 ko hmne assign kr diya apne new variable me(_age).to ye yaha pr jakar store ho gya 


*/