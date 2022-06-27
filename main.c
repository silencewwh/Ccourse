#include "menu.h"





void main()
{
    FILE *fp = NULL;
    fp=fopen("database","rb");
    menu:
    menu(); 
    switch (getinput())//choose menu
    {
    case 1:
        system("cls");
        infoentry();
        break;
    
    case 2:
        system("cls");
        break;

    default:
        system("cls");
        printf("please entry the right choose\n");
        goto menu;
        break;
    }
}

