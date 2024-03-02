#include "../HEADERS/io.h"
#include "../HEADERS/menu.h"
#include <stdio.h>
double citesteDouble(char *numeVariabila)
{
    double valoare;
    fputs(numeVariabila,stdout);
    printf("=");
    scanf("%lf",&valoare);
    return valoare;
}


void dialogIncepereExecutie()
{
    printf("Acest program calculeaza integrala ::f(x)=sin(exp(2 * x) + 3):: folosind 3 metode la alegere\n");
}

void dialogIesireProgram()
{
    printf("EXECUTIA PROGRAMULUI A FOST OPRITA LA CEREREA UTILIZATORULUI\n");
}

void afisareRezultat(struct _MENU_ITEM alegere, double rezultat)
{
    printf("Rezultatul integralei calculat prin ");
    fputs(alegere.nume,stdout);
    printf(" este %lf\n",rezultat);
}