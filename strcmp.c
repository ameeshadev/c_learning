#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="hello";
    char str2[]="world";
    int result=strcmp(str1,str2);
    if(result==0){
        printf("strings are equal.\n");
    }
    else{
        printf("strings are not equal.\n");
    }
}
//output is strings are not equal.
