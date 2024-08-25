#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float sallery;
    char name[10];
};
void show(struct employee emp){
    printf("the code of employee is: %d\n",emp.code);
    printf("the sallery of employee is: %.2f\n",emp.sallery);
    printf("the name of employee is: %s\n",emp.name);

}
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    //(*ptr).code = 101; // you can also write : ptr -> code = 101;
    ptr -> code = 101;
    ptr -> sallery = 101.05;
    strcpy(ptr->name,"sagar");
    show(e1);
    return 0 ;
}