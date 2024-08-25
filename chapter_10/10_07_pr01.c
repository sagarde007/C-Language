#include<stdio.h>
int main(){
    FILE *ptr;
    int num,num2,num3;
    ptr=fopen("integer.txt","r");
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    fscanf(ptr,"%d",&num3);
    printf("The 1st value of integer is %d\n",num);
    printf("The 2nd value of integer is %d\n",num2);
    printf("The 3rd value of integer is %d\n",num3);
    fclose(ptr);
    return 0;
}