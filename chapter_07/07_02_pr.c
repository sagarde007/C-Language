#include<stdio.h>
// multiplication table for n number 
int main(){
    
    int num;
    printf("enter the number: \n");
    scanf("%d",&num);
    int mul[10];
    for(int i=0 ; i<10 ; i++){
        mul[i] = num * (i+1);
    }

    for(int i=0 ; i<10 ; i++){
        printf("%d X %d = %d\n",num,i+1,mul[i]);
    }
    return 0 ;
}