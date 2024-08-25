#include<stdio.h>
#include<string.h>
struct bank_acc{
    int acc_no;
    char name[10];
    float acc_balance;

};
int main(){
    struct bank_acc customer1;
    customer1.acc_no = 321;
    strcpy(customer1.name , "sagar");
    customer1.acc_balance = 10.5;

    printf("%d",customer1.acc_no);
    printf("%s",customer1.name);
    printf("%f",customer1.acc_balance);
    return 0;
}