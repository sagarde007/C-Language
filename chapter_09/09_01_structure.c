#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float sallery;
    char name[10];
};
int main(){
    //int a = 34;
    //char b = 'g';
    //employee e1;
    //e1.sallery = 343.325; --> wont work without employee structure
    struct employee e1;
    e1.code = 100;
    e1.sallery = 75.12;
    //e1.name = "sagar"; ---> wound work
    strcpy(e1.name,"sagar");
    printf("%d\n",e1.code);
    printf("%.3f\n",e1.sallery);
    printf("%s\n",e1.name);
    return 0 ;
}