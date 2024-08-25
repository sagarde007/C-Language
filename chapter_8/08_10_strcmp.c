#include<stdio.h>
#include<string.h>
int main(){
    char st1[] ="hello";
    char st2[] = "hel";
    int val =strcmp(st1,st2);
    printf("%d",val);
    return 0;
}