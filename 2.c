#include <stdio.h>

void shuffle(int arr[] , int size , int result[] , int n){
    int j=0;
for(int i=0 ; i<n;i++){
    result[j] = arr[i];
    j++;
    result[j]=arr[i+n];
    j++;
}
}
int main(){
    int arr[]={3,5,6,7,9,2};
    int n=3;
    int size= n*2;
    int result[size];
    shuffle(arr, size, result , n);
    for(int i=0 ; i<size;i++){
        printf("%d ", result[i]);
    }
    return 0;
    }

