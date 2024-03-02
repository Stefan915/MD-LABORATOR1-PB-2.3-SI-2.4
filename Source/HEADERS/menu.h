#ifndef INTEGRALE_MENU_H
#define INTEGRALE_MENU_H
#define numarOptiuniMeniu 3
#include "integrale.h"

struct _MENU_ITEM
{
    char *nume;
    double (*functieCalcul)(double limInf, double limSup, unsigned int nrDiviziuni, double (*functie)(double));
};

int iaOptiune(int numarOptiuni,struct _MENU_ITEM meniu[]);


#endif
