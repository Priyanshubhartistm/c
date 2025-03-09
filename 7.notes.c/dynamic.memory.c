/* memory kis trh ses allocate hoti h,jb ham programme likhte h, to i) static memory allocation ii) dynamic memory allocation.

jb v ham koye 'c' k programme likhte h, or uske andr koye variable banate h, to c k compiler use variable k data type dekh leta h, or use hisab se memory phle allocate yani reserve kr deta h, 

pr kvi kvi yase cases aa skte h, jisme hmri memory ki jo requirement h, o code ke bich me change ho skti h,

jaise :- man lijiye apne koye array banya or use array me store krwana chahte h, ki apke class me kitne bache enroll h, to apke class man lijiye 30 students h, to use 30 students ke hisab se apne o array bana liye , lkin  sal ke bich me 3 new student bich me enroll kr jate h, to uske liye kya ap ek new array banyenge,jiska size 33 hoga , usme purani wali v value copy krenge or new wali v.

to y thoda s n tricky situation ho jati h, to isme energy bht  waste hoti h, 

to isliya hame ek Dynamic Memory Allocation ki jrurt pdti h, jo ek yasa tarika h,jise hm program ke bich me deside kr skte h, ki hame kitni memory chahya.(agr phle kam le li thi to usko jda kr skte h)or jda ko km v.

Dynamic Memory Allocation          = to dynamically yani "runtime" me ham deside krenge ki Memory Allocate honi h,

1. It is a way to allocate memory to a data structure during(2 times hote h, hmra)

i)  the runtime(jb hmra code actually run kr raha h,console ki window khuli hui h,user kch input/output print kr rha h,).programme ke starting or ending time ko ham runtime bolte h.

ii) or compile time(yani c k jo compiler h,oo run kr raha h,or ananlysis kr rha h,ki kitni memory h,int/float variable ko chahya hogi).

2. We need some functions to allocate    = Dynamic Memory Allocation ke liye ham kch functions chahya hote h,use functions ko use krke ham memory ke sath dynamically khelrhe hote h.

3.  & free memory dynamically.

Functions for DMA(Dynamic Memory Allocation)
a. malloc()    = mallloc stands for memory allocation
b. calloc()    = continous stands memory allocation
c. free()      = free functions.
d. realloc()   = re-allocation.

a. malloc()    = memory allocation.(kch particular amount of memory ko allocate kar dena)man lijiye apko chahya 30 byte ki memory code ke bich me to malloc oo lkr de dega.

i) takes number of bytes to be allocated(memory ko jin term me lkr deta h, major krta h, o bytes wali term h.)isme apko batna hoga ki itna byte k memory chahya apko.

ii) & returns a pointer of type void(total memory ke andr o un paticular byte k man lijiye (x byte) ek chunk le lega or use )or usko ek pointer assign kr dega ptr; 

jiska type hoga void , or ise pointer ke through ap ise memory ko jo h,usko app access kr payenge.

SYNTAX:- 
 ptr = (*int) malloc(5 * sizeof(int))

sizeof e ek function h. jsko int ke sath likhne pr o int4BYTE)  k size dega, float(4BYTE) e sath likhne pr , float k.


b. calloc()    = continous allocation(yani ise jo v memory aap allocate krenge oo sb continue ayegi)

initializes with 0      = hr jo value hoti h o intialize ho jati h, zero(0).

like:- 5 int ke brbar memory apne li to sare integer me bydefult 0 (store) allocate ho jayega.

- 5 float to 5 me 0.0,0.0 ho jayega 5times.

** to jab v apko memory dynamically eni h, or usme NULL(0) value assign krni h, to simply calloc k use kr lena h.

SYNTAX:-
ptr = (*int) calloc(5, sizeof(int))
isme byte ni location bhjenge,mtlb per location kya size chahya? 

to per location hame size chahya ek int ke brabar yani 5integer ke location chahaya to, 

c. free( )  = This is a important function of memory allocation.jo calloc, malloc ap Dynamically memory allocate ap krte h,o apne aap free ni hota h,

-We use it to free memory that is allocated
using malloc & calloc

SYNTAX:-
free(ptr)

c. realloc()           = yani kise memory ko dobara allocate krna.

reallocate (increase or decrease) memory
using the same pointer & size.(same pointer k use krke hm memory ko increase or decrease dono kr skte h )

jaise:- hmre clg wale ne kise course ke liye 1000 bacho ke liye , memory allocate kr di but, enroll only 70 bache hi hote h, to kafi sari memory waste ho jayegi to ise case me ham "realloc()" k use krte h.

reallocate me fltu memory hata degi or jo useful h, usko rakh lenge.


SYNTAX:-
ptr = realloc(ptr, newSize)

i) phle realloc.

ii) fir likhte h, o pointer jiske memory ko reallocate krte h,

iii) fir jo new size lena h, o lenge .

iv) fir isko opesh se assign kr denge; "ptr" yani pointer ko.


*/