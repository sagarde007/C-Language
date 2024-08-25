#include<stdio.h>
int main(){
    int arr[10];
    int *ptr = &arr[0];
    ptr = ptr + 2;
    if(ptr == &arr[2]){
        printf("this is the right order\n");
    }
    else{
        printf("this is not the right order\n");
    }
    return 0 ;
}