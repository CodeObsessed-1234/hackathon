#include<stdio.h>

void createEmailId(char email[20]){
    FILE *newFile = fopen("email.txt","a");
    char a = '\n';
    fputs(email,newFile);
    fputc(a,newFile);
    fclose(newFile);
}