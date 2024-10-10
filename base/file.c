#include <stdio.h>

int main(){
    FILE *fptr;
    char myString[100];
    // fptr = fopen("filename.txt", "w");
    //a是附加模式
    fptr = fopen("filename.txt", "a");
    fprintf(fptr, "Some text");
    fptr = fopen("filename.txt", "r");
    while(fgets(myString, 100, fptr)){
        printf("%s", myString);
    }   
    fclose(fptr);
}