#include<stdio.h>
//#include<string.h>
int strlen(char *st){
    char *ptr = st;
    int len=0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}
int main(){
    char st[34];
    printf("enter the name of a string:\n");
    scanf("%s",st);
    int l = strlen(st);
    printf("the value of length is %d",l);
    return 0;
}