/*
1. Reading from a file = file ko open or close krna to hamne sikh liya par close kaise kiya jaye. data ko ham padhte h,(filepointer) ki help se.

char ch;
fscanf(fptr, "%c", &ch);

fscanf ke andr h 3 parameters jisme se 1st h:- fptr = file pointer; 2nd:- "%c" = format specifier, 3rd:- &ch; = address of variable.

** ab jaise ham file se data read kr skte h, oaise hi write v kr skte h,data.

2. Writing to a file            =

char ch = 'A';

fprintf(fptr, "%c", ch)        = same hi parameters pass hota h.jo read me hota h.



3. Read & Write a char   = this is special function.

i) fgetc(fptr)           = getc yani get charater to file ke andr se "character" ko leke ata h.

> to y character read krne ke liye use hota h.

syntax :- (fptr)  = file pointer dal dete h, or y file pointer simply hmre function ke andr jayega or y function hame return krke de dega o function jo isne read kiya h, hamre file ke andr se
ii) fputc( 'A', fptr)    = fputc yani put kr deta h, character ko ek file ke andr , fir le lega use file k pointer jisko file ke andr right krna h,simply use file ke andr jake usko right kr dega.

to y character write krne ke liye use hota h.


*/