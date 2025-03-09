// 1. POINTER ARITHMETIC  = Pointer can be incremented and decremented.(pointer ke andr hm sare arithmetic operation to ni kr skte but kch kr skte h), yani pointer ki value ko ham +,- kr skte h..
/*
jb v ham pointer ko increment\decrement krte h,to ek special case hoti h, unki value (+1,-1)NI HOTI H, jb v +1 likha ho uska mtlb hota h..EK data type badha do yani pointer integer type k h, to oo integer ke size se badh jayega mtlb (1 KI JHUGH 4 BYTE BADH JAYEGA)

>> char type h..to char ke size se badh jayega,
>> float type h..to float ke size se badh jayega,

agr pointer ki value 2000 h,to value badhkr 2004 ho jygi,

** agr hamne ptr++ kiya to 4byte (+) ho jayega.

** agr hamne ptr-- kiya to 4byte (-) ho jayega.

CASE iv):-
a. wE can also subtract one pointer from another.(ek pointer me se dusare ki value - krna )
ek or bt int ko int ke sath hi compare kr skte h.other ke sth ni
CASE v):-
b. we can also compare 2 pointers.

always pointer will be same not different type.like:- (int-char)

dono me differnece number k ni ata h.. difference ata h..datatype k, ki kitne data types k h..

2. ARRAY IS A POINTER = jo hm array padh rhe the..o pointer hi h

>> array k jo nm hota..o pointer hota h
i) int *ptr = &arr[0]
&arr[0] -> array of 0 ka address 1st pointer ke andr store kr dete h.. 

ii) int *ptr = arr;
pr hm ise right side wali (&arr[0]) pure part ko hm array se replace karna chahe to v kr skte h, 

mtlb hmra jo array hota h..uska 1st indeex pe jo location h..array kqa nm o actually ek "pointer" hota h..point kha krta h..(array ko 0th index pr) 

jaise :- marks nm ka array h,jisme kfi sare student ka marks store krwye hue h..0,1,2,3,4,5,6

y jo marks h.iska type jo h..o ek pointer h.or y point kha karwata h..point krwata h..array ki 0th index location pe 

fir chahe hm y line likhe (&arr[0];) mtlb address of 0th location 

y fir hm sidha array k nm likhe (arr;) dono equal h.dono k syntax alg alg h.

ise trh se dono k mtlb same h, ise trh se array ek pointer hota h..

CASE 1 :-
int age  = 22;
int *ptr = &age;
ptr++;

CASE 2 :-
float price = 20.00;
float *ptr  = &price;
ptr++;

CASE 3 :-
char star = '*'
chat *ptr = &star;
ptr++;



*/

