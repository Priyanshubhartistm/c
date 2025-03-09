// 1. Declaring pointers
/*
i)     int*ptr;    = int age = 22;
ii)    char*ptr    = char star = '*';
iii)   float*ptr;  = float price = 10000;


2. FORMAT Specifier :-(%d ni likh skte h..q ki uske andr ab ek integer value store ni h;uske andr ek "address" store h) or address k apna ek type hotah h..uske type ke liye likhna oadta h..(%p),ise p mtlb hota h c ke andr "pointer" 

- %p likhne pe ek ajib si value print hogi, pr o jo ajib si chiz jo print hoti h..(yaha pr hmre pass usually hexadecimal value aa jayegi,agr syatem hexadecimal from me pointer k value store h..to )

- usko hm kvi kvi(%v)ki help se v likh dete h..

- pr hme oo normal no. ki from me chahya to usko hm (typecast) kr dete h..

- %u hota h ..unsigned int ke liye.

- printf("%p",&age);      = mtlb hm ek pointer ki value ko print krwane wale h..ek memory address ko print krwane wale h..jb v hm & likhte h..aur uske bd variable(age) ka nm likhte h.. mtlb & is (address of )to uske bd hmko use variable k address mil jata h..ab address k type hota h,(%p) to hm address print krwa denge.

- printf("%p",ptr);       =  agr &age hme address deta h..to "ptr" v wahi dega n, to usme v %p

- printf("%p",&ptr);       = agr hm likhna chahe "address of pointer"(yani pointer k v to koye address hoga)

*/