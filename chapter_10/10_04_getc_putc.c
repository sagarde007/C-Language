#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("getcdemo.txt","r");
    //char c = fgetc(ptr);
    //printf("the value of my character is %c\n",fgetc(ptr));
    //printf("the value of my character is %c\n",fgetc(ptr));
    //printf("the value of my character is %c\n",fgetc(ptr));
    //printf("the value of my character is %c\n",fgetc(ptr));
    //printf("the value of my character is %c\n",fgetc(ptr));
    //printf("the value of my character is %c\n",fgetc(ptr));
    ptr = fopen("putcdemo.txt","w");
    putc('s',ptr);
    putc('a',ptr);
    putc('g',ptr);
    putc('a',ptr);
    putc('r',ptr);
    fclose(ptr);
    return 0 ;
}