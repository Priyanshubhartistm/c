// Pratice qs. 44
// Write a function to reverse an array.
// jb v array ko reverse krn h,to 1st ko last ke sath reverse kr do, 2nd ko 2last ke sath kr do.aage wala piche chala ayega.

# include <stdio.h>

void reverse(int arr[], int n);
void printArr(int arr[], int n);


int main() {
    int arr[] = {1,2,3,4,5};
    reverse(arr,5);
    printArr(arr, 5);  // main function ke andr v array reverse ho gya.
    return 0;
} 
// to y dikhta h..ki array ko jb v hm function ke andr pass krte h.to hmesa "call by refernce" hota h..

// array ko ap kise or function ko de denge or fir o function usme kch changes kr dega to o changes apke pass v honge , refelect hokr ayenge isliya, 

// arrays ki value ko kise v functions ke andr dhyan se change krna hota

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
// q ki o calling function ke andr v refelect krega.

// call by refernce 
void reverse(int arr[], int n) {
    for(int i=0; i<n/2; i++) {
        int firstVal = arr[i];
        int secondVal = arr[n-i-1];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }
    
}