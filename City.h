#include<stdio.h>

void createCityFile(char city[20]){
    FILE *newFile = fopen("city.txt","a");
    char a = '\n';
    fputs(city,newFile);
    fputc(a,newFile);
    fclose(newFile);
}