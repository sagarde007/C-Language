#include<stdio.h>
int main(){
   int *ptr;
   printf("the size if int on my pc is %d",sizeof(int));
   ptr = malloc(6* sizeof(int)); 
    return 0 ;
}
