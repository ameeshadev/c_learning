#include <stdio.h>
void main(){
    int a=1;
    while(a<10){
        if(a==4){
            a++;
        continue;    
        }
        printf("%d",a);
        a++;
    }
    
} 
    
    
