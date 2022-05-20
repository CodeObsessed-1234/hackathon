#include "./MobileNo.h"
#include "./Address.h"
#include "./City.h"
#include "./EmialId.h"
#include <stdio.h>
#include<conio.h>

struct MainPhoneBook
{
    char name[20];
    char city[20];
    char address[50];
    char phoneNo[12];
};


void main(){
    int choice;
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
            /* code */
            break;
        
        default:
            break;
        }
    }while(1);
}
