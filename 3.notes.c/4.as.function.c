// Array as function Argument :-
/*
ab  jaise ham normal integer,float ko hm function me argument ki trh pass krte h, usi trh hm function calls ke andr array ko v bhej skte h..yani kise function ko ham bana skte h..ki print karo array ki value ko iske andr koye value ko dal denge to print kar dega uske argument me , uske parameter me ek value define karna hoga, 

>> FORMAT :-

1. FUNCTION DECLARATION   = 
i) void printNumbers(int arr[],int n)

sbse phle ata h.function dec., yase function ko ap dec.kaise karenge y to  uske argument ke andr apne normal function likha hua h.par parameter ke andr ap likhenge (int arr[],int n) ise ke andr[] apko size dene ki jruert ni h.. mtlb y kise v size k ho skta h..array 

isliya size ke liye hme alg se ek integer pass krna hoga jo bata h..array k size kya h..

ii)  void printNumbers(int *arr,int n)


y fir usko pointer ki trh v pass kr skte h..

void printNumbers(int arr[],int n)     = y hamra square wala tarika 
oid printNumbers(int *arr,int n)       = or y h..hmra pointr wala tarika

2. FUNCTION CALL                       = printNumbers(arr, n);

iske andr bs apko array k nm likh dena h..


*/