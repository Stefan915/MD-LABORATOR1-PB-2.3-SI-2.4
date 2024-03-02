#include "integrale.h"
#include "io.h"
#include "menu.h"

extern struct _MENU_ITEM meniu[];

int main() {
    double valoareIntegrala;
    double limSup;
    double limInf;
    double precizie;
    int alegere;

    dialogIncepereExecutie();
    alegere = iaOptiune(numarOptiuniMeniu, meniu);

    if(alegere==0) {
        dialogIesireProgram();
        return 0;
    }
    else {
        alegere--;
    }

    limInf = citesteDouble("Limita inferioara");
    limSup = citesteDouble("Limita superioara");
    precizie = citesteDouble("Precizie∈[2,inf)");

    valoareIntegrala = meniu[alegere].functieCalcul(limInf, limSup, precizie, fX);

    afisareRezultat(meniu[alegere], valoareIntegrala);

    return 0;
}


