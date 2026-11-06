#include<stdio.h>
#include<stdio.h>
int main(){
    int count=0;
    char name[30];
    printf("enter the name");
    gets(name);
    count=strlen(name);
    printf("length of name is %d", count);
    return 0;
}