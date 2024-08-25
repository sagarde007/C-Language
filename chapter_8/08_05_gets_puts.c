#include<stdio.h>
int main(){
    char s[34];
    int i;
    printf("enter your name : ");
    gets(s);
    //puts(s);
    while(i!='\0'){
        printf("your name is %s ",s);
        printf("\n");
    }
    
    return 0 ;
}


int space = 32;
int sl = strlen(s);
for (int i = 0; i < sl; i++)
{
    if (s[i] == space)
    {
        printf("\n");
    }
    else
    {
        printf("%c", s[i]);
    }
}