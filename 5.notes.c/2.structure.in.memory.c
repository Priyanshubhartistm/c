/*
STRUCTURE IN MEMORY:- 
> jb ham structure ko declear krte h, to memory ke andr kya actually me kya hota h?

hamne padha tha ki integer array ko declear krte h, to memory ke andr 3 contigeous location store ho jati h..

struct student{
char name;
int roll;
float cgpa;
}

oaise ham structure banate h, to uske andr hm jo va data types define krte h,to us data types ke hisab se memory ke andr kch kch jo area h,oo store ho jata h,o v contigeous (yani lagatr).

> jaise array ke andr ek ke bad ek blocks hote h, 

> oaise yaha pr v contiguous memory location hoti h,jaise:-  hamne ek student structure banya jisme sbse pahle hamne charater array rakha "string" ke liye ; 

i) to sbse phle string ke barbar memory location hamre pass store ho jayegi, jisko ham nam de denge(name) or name ke andr ab ham jitne v charaters apne name string ke andr store karwana chahte h, o sare ke sare store ho jayenge,

ab yaha par hame size jo diya h, o [100] charater ke barbar h (to 2010 aye to ab ),

ii) to next integer jo hota h,o 100 charater bad allocate hoga.


iske bad 2110 ayega to roll no.ko space milegi,roll no.integer type k,h to isko space milegi 4 bytes ki,

iii) ab 4 bytes k bd 2114 ayega jaha cgpa , cgpa hmra float type k,h to waha pe v hmra iske barbar hi memory mil rahi hogi, 

** ise trh se contiguous fashion me yani ki lagatar wale fashion me , ek ke bad ek memory location store hoti h,jb v ham ek "structure" ko creat krte h, to 




*/