#include "../HEADERS//integrale.h"
#include "../HEADERS//io.h"
#include "../HEADERS//functii.h"
#include <stdio.h>

extern struct _MENU_ITEM meniu[];

struct Integrala integraleDeCalculat[NUMAR_INTEGRALE_DE_CALULAT]=
        {
                {0,1,f1},
                {1,3,f2},
                {0,3,f3},
                {1,4,f4},
                {1,5,f5}
        };

int main() {
    double precizie;
    double rezultat;
    int i;
    int j;

    dialogIncepereExecutie2_4();
    precizie = citesteDouble("Precizie∈[2,inf)");

    printf("Integrala |  Metoda Trapezelor    |      Metoda Simpson   |  Metoda Dreptunghiurilor\n");
    for(i=0;i<NUMAR_INTEGRALE_DE_CALULAT;i++)
    {
        printf("I%d        ",i+1);
        for(j=0;j<numarOptiuniMeniu;j++)
        {
            rezultat=meniu[j].functieCalcul(integraleDeCalculat[i].limInf,integraleDeCalculat[i].limSup,precizie,integraleDeCalculat[i].functie);
            printf("|%23.6lf",rezultat);
        }
        printf("\n");
    }
    return 0;
}


