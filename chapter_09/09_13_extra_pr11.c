#include<stdio.h>
typedef struct date{
    int date;
    int month;
    int year;
    int hour;
    int min;
    int sec;
}date;
void display(date d){
    printf("%d/%d/%d : %d:%d:%d \n",d.date,d.month,d.year,d.hour,d.min,d.sec);
}
int datecmp(date d1 , date d2){
    if(d1.year > d2.year){
        return 1;
    }
    if(d1.year < d2.year){
        return -1;
    }

    if(d1.month > d2.month){
        return 1;
    }
    if(d1.month < d2.month){
        return -1;
    }

    if(d1.date > d2.date){
        return 1;
    }
    if(d1.date < d2.date){
        return -1;
    }

    if(d1.hour > d2.hour){
        return 1;
    }
    if(d1.hour < d2.hour){
        return -1;
    }

    if(d1.min > d2.min){
        return 1;
    }
    if(d1.min < d2.min){
        return -1;
    }

    if(d1.sec > d2.sec){
        return 1;
    }
    if(d1.sec < d2.sec){
        return -1;
    }
    return 0;

}
int main(){
    date d1 = {2 , 5 , 24 , 5,15,4};
    date d2 = {2 , 5 , 22 , 4, 3,2};
    display(d1);
    display(d2);
    int a = datecmp(d1,d2);
    printf("date comparision function returns : %d",a);

    return 0;
}