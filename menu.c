#include "menu.h"
#include "stdio.h"

struct _MENU_ITEM meniu[numarOptiuniMeniu]={
        {"Metoda trapezelor",integralaTrapez},
        {"Metoda Simpson",integralaSimpson},
        {"Metoda Dreptunghiurilor",integralaDreptunghiuri}
};


int iaOptiune(int numarOptiuni,struct _MENU_ITEM meniu[])
{
    int i;
    int optiune;
    printf("\nCare este metoda pe care vrei sa o folosesti?\n");
    printf("Optiunea 0:EXIT\n");
    for(i=0;i<numarOptiuni;i++)
    {
        printf("Optiunea %d:",i+1);
        puts(meniu[i].nume);
    }
    scanf("%d",&optiune);
    return optiune;
}