#include<stdio.h>
void revurse(int *arr , int n){
    int temp;
    for(int i=0 ; i<(n/2) ; i++){
        temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
int main(){
    int arr[] = {2,5,7,6,9,8,4};
    revurse(arr , 7);
    for(int i=0 ; i<7 ; i++){
        printf("the value of %d element is %d\n",i,arr[i]);
    }
    
    return 0 ;
}