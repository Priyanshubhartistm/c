/*
IMPORTANT 
i) scanf() cannot input multi-word string with spaces   = scanf ke andr app sirf ek hi word ko enter kr skte h.. use jda ko ni.asm

example:- this is my name   = to yaha bs (This) hi input hoga.or word ni hoga.

it is a drawback of scanf()  = y multi- word ko enter ni kara pata h..q ki ya spaces ko hi ni track kr payega.


to yaha pr ham do special functions ka use krenge jo,
here,
ii) gets() & puts() come into picture


1. STRING FUNCTIONS :- string ke 3 functions ate h,jb v ham string ko i\p, or o\p krwana chahte h.to

i) gets(str)   -----> dangerous & outdated h(iski wajh se kafi sare s\w hack ho jate h)q ki gets y track ni krta h..ki str k maxium size kya h..isko use ni kiya jata h, even c ke 11th version se gets ko completly hata diya gya h..

> gets hmri string ko input kr leta h.

> gets(str);    = ise o\p ho jyegi.

ii) puts(str)   -----> 

>or puts hmri string ko output kr lete h..

puts(str);    = ise o\p ho jyegi.

iii) fgets(str, n, file)    = gets dangeours h, to uski jhugh iska use hota h.

> isme phle string dalte h..
> fir size dal dete h, string ki kitni size dalni h,string ka.
> fir uske baad apni file ka nam.(stdin -: standard input) 

** stops when n-1 chars input or new line is entered. 

mtlb ap apna word likht rahenge pura hi likhte rhenge jaise hi , enter press kr denge , to wahi pr string khtm ho jyega.




*/