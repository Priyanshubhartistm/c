/*
1. STRINGS =  A character array terminated by a '\0' (null character).

> \n    = next line
> \t    = tab space
> \0    = null character k km hota h..kise v string ko khtm kRN YANI terminate krna.

> null char denoted string termination.
jb kise letter ke sath null char ko add kr dete h. to oo word ban jata h, alg alg ni rhta h..
example :- 
char name[]    = {'P','R','I','Y','B','\0'};             = PRIYAB
char class[]   = {'B','T','E','C','H','','L','E','\0'}   = BTECH.LE

CHARACTER = are store single letter.
STRING    = are store word, sentence.


2. TWO TYPES OF INTITIALISING STRING :-
i) char name [] = {'P', 'B','\0'};
ii) char name [] = "PRIYA"  (iske andr c , compilar null character khud dal deta h)

NOTE :- 
> jb v charater ko likhenge to single quote me = ''
> jb v string ko likhenge to double quote me = ""

3. jb v ham string ko define krte h.to memory ke andr kya hota h?

Normal char array vs string char array:-

4. STRING FORMAT SPECIFIER :-
"%s" ----> string

char name[] = "priya";
printf("%s", name);

int main () {
    char name[50];
    scanf("%s", name);    \\ %s hmesa use krna h,jb v hm scanf or printf ki help se input or output krwana h,tb 
    printf("your name is %s", name);
    return 0;
}


*/