#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float sallery;
    char name[10];
};
int main(){
    struct employee e1 , e2, e3;
    printf("Enter the code of employee e1: ");
    scanf("%d", &e1.code);
    printf("Enter the name of employee e1: ");
    scanf("%s",e1.name);
    printf("Enter the sallery of employee e1: ");
    scanf("%f", &e1.sallery);

    printf("Enter the code of employee e2: ");
    scanf("%d", &e2.code);
    printf("Enter the name of employee e2: ");
    scanf("%s",e2.name);
    printf("Enter the sallery of employee e2: ");
    scanf("%f", &e2.sallery);

    printf("Enter the code of employee e3: ");
    scanf("%d", &e3.code);
    printf("Enter the name of employee e3: ");
    scanf("%s",e3.name);
    printf("Enter the sallery of employee e3: ");
    scanf("%f", &e3.sallery);
    return 0 ;
}
