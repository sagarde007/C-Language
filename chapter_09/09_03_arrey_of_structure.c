#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float sallery;
    char name[10];
};
int main(){
    //struct employee facebook{100,100.25,"sagar"}; ---> another way to initialization arrey.
    //printf("%d",facebook.code);
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].sallery = 100.45;
    strcpy(facebook[0].name,"sagar");
    printf("done");
    return 0 ;
}