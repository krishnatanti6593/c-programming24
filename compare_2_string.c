#include<stdio.h>
#include<string.h>
int main(){
    int value;
    char name[10];
    printf("entr the 1st string\n");
    gets(name);
    char name2[10];
    printf("enter the 2nd string");
    gets(name2);
    value=strcmp(name,name2);
        if(value==0){
            printf("same");
        }
        else{
            printf("not same");
        }
    return 0;

    
}