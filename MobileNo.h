#include<stdio.h>

void createPhoneNoFile(char phone[12]){
    FILE *newFile = fopen("mobileNo.txt","a");
    char a = '\n';
    fputs(phone,newFile);
    fputc(a,newFile);
    fclose(newFile);
}
