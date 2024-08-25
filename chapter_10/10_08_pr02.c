#include<stdio.h>
int main(){
    FILE *ptr;
    int num;
    printf("Enter the number to creat a multiplication table :\n");
    scanf("%d",&num);
    ptr = fopen("multiplicationtabe.txt","w");

    for(int i=1;i<=10;i++){
        fprintf(ptr,"%d X %d = %d\n",num,i,num*i);
    }
    fclose(ptr);

    return 0;
}