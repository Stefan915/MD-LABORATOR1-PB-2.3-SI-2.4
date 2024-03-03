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


void dialogIncepereExecutie2_3()
{
    printf("Acest program calculeaza integrala ::f(x)=sin(exp(2 * x) + 3):: folosind 3 metode la alegere\n");
}

void dialogIesireProgram2_3()
{
    printf("EXECUTIA PROGRAMULUI A FOST OPRITA LA CEREREA UTILIZATORULUI\n");
}

void afisareRezultat2_3(struct _MENU_ITEM alegere, double rezultat)
{
    printf("Rezultatul integralei calculat prin ");
    fputs(alegere.nume,stdout);
    printf(" este %lf\n",rezultat);
}


void dialogIncepereExecutie2_4()
{
    printf("Acest program calculeaza integralele date folosind cele 3 metode\n");
}