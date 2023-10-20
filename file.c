
#include <stdio.h>
int main(){
    
    FILE *fptr;
    //create a file on my cumputer(filename.c)
    fptr=fopen("filename.c","w");
    //close the file
    fclose(fptr);
    return 0;
    
}
