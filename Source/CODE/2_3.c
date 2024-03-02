#include "../HEADERS//integrale.h"
#include "../HEADERS//io.h"
#include "../HEADERS//menu.h"
#include "../HEADERS//functii.h"

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

    valoareIntegrala = meniu[alegere].functieCalcul(limInf, limSup, precizie, f1);

    afisareRezultat(meniu[alegere], valoareIntegrala);

    return 0;
}


