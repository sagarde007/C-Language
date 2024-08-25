#include<stdio.h>
#include<string.h>
int main(){
    char st1[30];
    char st2[30];
    char a;
    int i=0;
    printf("enter the value of first string :\n");
    scanf("%s",st1);
    printf("enter the value of second string character by character:\n");

    while(a!='\n'){
        fflush(stdin);
        scanf("%c",&a);
        st2[i] = a;
        i++;
    }
    st2[i]='\0';
    printf("the value of first string is %s\n",st1);
    printf("the value of second string is %s\n",st2);
    
    return 0;
}