// Array :- Collection of similar data type stored at contiguous memory locations.
/*
1. hame kise memory location me kise value ko store karwana hota h, to usko ham store karwatea h, ek variable ki help se(1 variable lete h,o ek memory location ko reserved kr leta h,uske andr hm kch data store krwa dete h.) or use memory location ko kch nam de dete h,jo hota h, hmra "variable".

2. same type of data store always, |22|23|24|

3. stored at contiguous memory location,(mtlb ek ke baad ek store hota h)to isko access karna asan ho jata h..

to jb v hame multiple variable store karane hote h..n to unko alg alg nam dene ki jhugh hm ek "array" bana lete h.


4. SYNTAX :-
i) int    marks[3];  = for integer type array :- to phle type(int), arrayname(marks), uske bd square bract[] uske andr no.[3] likhte h..o number hota h,"size" yani ki size ki hame location chahya,agr hame 3,integer value chahya to 3 likhenge,or 5 chahya to likhenge,or 10 chahya to 10.


ii) char   name[10];   = agr char bana h,to type(char)arrayname(name), uske bd square bract[] uske andr likhenge kitne char hame store karwane h,
iii) float  price[2];   = float bana h,to float type,fir uska nm,fir square ke andr "size"  kitne floats store karwane h.o likhenge.

5. INPUT IN ARRAY :-
SCANF("%d",&marks[0]); 

6. OUTPUT IN ARRAY :-
PRINTF("%d", mark[0]);

some language has a 0 base index like:- c,cpp,java. iska mtlb ki 1st position ko hm 1 ni 0 bolene,

7. INITITALIZATION OF ARRAY :-

A. int marks[] = {97,98,89};
>> i) sbse phle data type(int), ii) fir array k nm (marks), iii) fir square bracket (ise bract me size ko likhne ki jrurt ni h.q ki right side me hm jitne v element likhenge o automatticaly size de dega array, iv) uske baad likhte h,curely braces{}, aur uske andr jitne v element agr hamne 3 element likhe h,to mtlb hm 3 size k array banyenge)

B. int marks[3] = {97,98,89}  // this is intialize the array.
y dono hi syntax likh skte h.jb hm array ko intialize ke sth sth declare v krte h,to

>> Memory ke andr intialize hone se kya hota h,to y chiz hm dekhenge 

marks ka nm ka array h.. 
usme 3 value h.. 99,98,97 
or 3 position h.. 0,1,2
or 3 ,(4,4,4)BYTE k hoga,qki integer 4 btye k hota h..


=> total memory reserved = 12byte consume ho gya ise trh se 3memory ko store karwane me.


*/