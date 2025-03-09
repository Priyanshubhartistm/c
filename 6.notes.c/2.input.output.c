/*
1. File IO(input/output):-

FILE - container in a storage device to store data. 

isko chunk of data v kha skte h, isme kafi data store hota h, 

- RAM is volatile

- Contents are lost when program terminates. (hmra programe end hote h,sara data saf ho jata h,q ki hmra program ram ke andr h, or program ram ke andr h,to variable v ram ke andr h )

- Files are used to persist the data. (isliya kise v chiz ko peramently store krane ke liye ham "file" banate h,)

2. Operation on Files:- 

i) Create a File         = Subse Pehle hum file Banaying.
ii) Open a File          = fir open
iii) Close a File        = fir close
iv) Read from a File     = fir usme kch padhenge
enge

3. Types of Files:-

i) Text Files   = isme likha hua sara data hame samjh ayega.

- textual data    = y ek real data hoga . means human understandabl.
- .txt, .c

ii) Binary Files  = isme likha hua sara data hame samjh ayega.

- binary data    = isme jo data hoga hamra oo (0,1) ke from me store hogi.oo hmre liye koye sense ni banyega.
- .exe, .mp3, .jp

4. File Pointer:-file ko access krne ke liya, y usko read,write,creat,open,close y sb km ; File Pointer krta h.

FILE is a (hidden)structure that needs to be created for opening a file.(hr file k apna ek alg structure hota h,jaise linux/windows/mac sbke liye alg alg structure hota h,usko ap change ni kr skte h)

jb v ham kise file ko permament stores se data ko read krne jate h, to ek structure ke andr oo sara k sara data hidden hota h, or o "structure" banan jruri h, jb v ham kise file ko open krte h,to 

- A FILE ptr that points to this structure & is used to access the file. (or use structure ko o file pointer , point krta h)

file pointer ek trh k ek pointer hota h, jiska type file hota h.

to use file pointer ki help se ham uses chiz ko open\close,write/read sb kr skte h,


SYNTAX:-

 FILE *fptr
i) sbse phle type yani(file)
ii) fir *
iii) fptr; koye v variable likh skte h,but y ek file k pointer h, to hamne fptr; likh diya.you can write ptr,fp,p. no difference.


5. i) Opening a File   = file ko open krne ke liye syntax

 FILE *fptr;
fptr = fopen("filename", mode);  = file ko open krne ke liye "f" open nam k ek function hota h, 
- y 2 parameters leta h, 
- 1st:- (filename, jaise:- "test.txt", "hello.c")
- 2nd:-(mode,y btata h,read/write y kch or krna h )
- 2 parameters ko pass krke fptr me uski value assign kr di.

mostly ham jb v file ke function discuss krenge to uske samne, ek "f" use bht clearly pta chal jata h,ki file ka functions hota h, fir chache o close krne ke liye ho y open krne ke liye.

ek common chiz hmesa rahega ki file ke function ke samne hmesa hi ek 'F' rahega taki dur se hi pta chal jaye ki y file ki function h.

ii) Closing a File   = read/write sb km khtm krne ke bad file ko close kr dena ek bht acha part h.system ki efficiency badhane ke liye file ko hmesa hi close kr dena chahya.

fclose(fptr)    = file ko close krne ka y syntax h.
*/