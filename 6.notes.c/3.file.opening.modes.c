/*
1. File Opening Modes  = files ko ham kis kis modes me khol skte h.
- "r"              open to read   // koye file agar exists hi ni krti h, or app call krna chaha rahe ho hello.c to use case me oo (null)store ho jayega pointer ke andr."y sabhi mode me lagu ho".
- "rb"             open to read in binary
- "w"              open to write(file ke andr ap kch likhn achahte h)/ koye file agar exists hi ni krti h, or app call krna chaha rahe ho hello.c to y usko "creat" kr degi.
- "wb"             open to write in binary(file ke andr ap binary format me kch likhna chahte h)
- "a"              open to append(means old data me new data ko add kr dena)apka new data , old ke bad aana suru hoga.

NOTE:- this is 5 most important mode . when i want to opena file.


2. BEST Practice
Check if a file exists before reading from it
(agr hm kise file ko read krne ke liye check kr rhe h, to sbse phle y check kr lena chahya ki kya hamri "file" exists v krti h)



*/