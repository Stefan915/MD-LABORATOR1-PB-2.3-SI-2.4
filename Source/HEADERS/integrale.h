#ifndef _INTEGRALE_METODE_H_
#define _INTEGRALE_METODE_H_
#define NUMAR_INTEGRALE_DE_CALULAT 5

struct Integrala
{
    double limInf;
    double limSup;
    double (*functie)(double x);
};


double integralaTrapez(double limInf, double limSup, unsigned int nrDiviziuni, double (*functie)(double));
double integralaSimpson(double limInf,double limSup,unsigned nrDiviziuni,double (*functie)(double));
double integralaDreptunghiuri(double limInf, double limSup, unsigned int nrDiviziuni, double (*functie)(double));
#endif
