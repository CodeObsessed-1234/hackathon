#include<stdio.h>

void createAddressFile(char address[100]){
    FILE *newFile = fopen("address.txt","a");
    char a = '\n';
    fputs(address,newFile);
    fputc(a,newFile);
    fclose(newFile);
}