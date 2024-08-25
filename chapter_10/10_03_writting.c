#include<stdio.h>
int main(){
    FILE *fptr;
    int number = 45;
    fptr = fopen("generated.txt","w");
    fprintf(fptr,"the number is %d\n",number);
    fprintf(fptr,"thank you!");
    fclose(fptr);

    return 0 ;
}