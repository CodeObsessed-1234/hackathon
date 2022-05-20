#include "./MobileNo.h"
#include "./Address.h"
#include "./City.h"
#include "./EmialId.h"
#include "./Name.h"
#include <stdio.h>
#include<conio.h>

struct MainPhoneBook
{
    char name[20];
    char city[20];
    char address[50];
    char phoneNo[12];
    char email[20]
};


typedef struct MainPhoneBook mpb;

void main(){
    int choice;
    mpb * r;
    r=(mpb *)malloc(sizeof(mpb));
    printf("Welco;me to your Phone Book- ");
    printf("Press 1 for Create New Contact\n");
    printf("Press 2 to see all Contact\n");
    printf("Press 3 to Update\n");
    printf("Press 4 to Search\n");
    
    printf("Press -1 for Exit\n\n");
    do{
        printf("Enter Your Choice:- ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
           puts("Enter Name ");
           scanf("%s",&r->name);
           puts("Enter City ");
           scanf("%s",&r->city);
           puts("Enter Address ");
           scanf("%s",&r->address);
           puts("Enter Phone No. ");
           scanf("%s",&r->phoneNo);
           puts("Enter Email ");
           scanf("%s",&r->email);
           
           createNameFile(r->name);
           createAddressFile(r->address);
           createCityFile(r->city);
           createEmailId(r->email);
           createPhoneNoFile(r->phoneNo);
            break;
        
        default:
            break;
        }
    }while(1);
}
