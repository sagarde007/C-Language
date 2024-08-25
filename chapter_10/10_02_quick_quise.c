#include<stdio.h>
int main(){
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("sagar.txt","r");
    if (ptr == NULL){
        printf("This file does not exists");
    }
    else{
        fscanf(ptr,"%d", &num);
        fscanf(ptr,"%d", &num2);
        printf("the value of num is : %d  \n",num);
        printf("the value of num is : %d  \n",num2);
    }
    return 0 ;
}