/*
1. STRUCTURE = A collextion of different data types.

>> jaise hamne integer k collection integer array dekha h..

>> charaters k collection dekha h,string.

>> usi trh se hame ek yasa collection bana ho,jisme bht type ke data store ho, 

>> jaise hame ek int v store krn ho , ek char v store krna ho , or ek float v or ek string v to in 4ko milakr ham ek array ko (form) ni creat kr skte h, bcz array ek data of collection similar type of data hota h..

>> but yaha pr hame yase collection ko form krna h, jaha pr different data type ho.that is called structure.


>> yani ap alg alg data type le lenge or fir usko ek strucuture ke andr ek collection ke andr ap rakhna chahenge to usko ham ek strucutre khte h..


2. EXAMPLE:- for a sudent store the following:
name(string)
roll no(integer)
cgpa(float)


3. SYNTAX :-
struct student{
    char name[100];
    int roll;
    float cgpa;
};



i) struct = struct keyword likhte h, struct keyword hame bata h,ki ham ek structure create krne wale h,   

ii) student uske bd structure k nm (jaise ki ham ek student ki information store kara rhe hote h,to ham usme diff. diff value store kara rhe honge ; to structure k nm hamne de diya student). 

employee ki information store kara h, to ham iska nam employee de denge, 

iii) iske andr 3 value store karyi h, hame
> char name[100];      = ek char variable
> int roll;            = ek integer variable
> float cgpa;          = ek float variable

iv) {} = or ise pure structure ko ham paranthesis ke andr likhte h, mtlb paranthesis ke andr jo jo element aane wale h, usko ham andr likhte h..

v) ; = or end me ham laga dete h,ek statement terminator.


4. agar hame yasa data type chahya jisme integer/float ke liye 4-4byte data type chahya .or usme char v store karwan h, to yasa "custom" data type user ko khud banan hoga.

o already 'c' me exists ni krta h, 

>> or y yase jo data type hote h,unko user define data type khte h..

** or "structure" hamra user define data type ki category me ata h..

jisko user khud define kr skta h.

>> int arr[3];    = isme 3 integer jitni memory store ho jayengi.

>> waise hi ham student creat krte h, n to student creat hote hi hmre paas 
- ek string ke barbar memory reserved ho jati h..
- ek integer ke barbar memory reserved ho jati h..
- ekfloat ke barbar memory reserved ho jati h..


to ab hamre pass ek new data type aa gya jisme ham 3 alg-alg value ek sath store krwa skte h..

like:- int n = 5;
struct student s1;
s1.cgpa = 7.5;
s1.name = priya;
s1.roll = 8;


i)kch ise trh se ham strcture ko declear krte h..
struct student{
    int role;
    float cgpa;
    char name[100];
};



ii) fir uska ek variable banate h..
int main() {
    struct student s1;


iii) fir variable me parameters asaign krte h.
s1.role = 1664;
    s1.cgpa = 9.2;
    //s1.name = "priya";
    strcpy(s1.name, "priya");


iv) fir use value ko hm use kr skte h,kahi v mtlb use value ko print krwa skte h, usko change v kr skte h, or use value ko kise or dsri value ko v assign kr skte h.



*/