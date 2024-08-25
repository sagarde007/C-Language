#include<stdio.h>
int main(){
    FILE *ptr1;
    FILE *ptr2;
    int n;
    
    
    ptr1 = fopen("c.txt","r");
    fscanf(ptr1,"%d",&n);
    int b = n*2;
    ptr2 = fopen("c.txt","w");
    fprintf(ptr2,"%d",b);
    fclose(ptr1);
    fclose(ptr2);


    return 0;
}