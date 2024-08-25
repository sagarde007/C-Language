#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code ;
    float sallery;
    char name[10];
}emp;
void show(emp emp1){
    printf("the sallary of e1 is %f",emp1.sallery);
}
int main(){
    struct employee e1;
    //e1.code = 100;
    struct employee *ptr;
    ptr = &e1;

    ptr->sallery = 100.578;


    ///printf("%d",e1.code);
    show(e1);
    return 0;

}