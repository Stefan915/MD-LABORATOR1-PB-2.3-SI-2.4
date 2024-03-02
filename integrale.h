#ifndef _FUNCTII_H_
#define _FUNCTII_H_

double integralaTrapez(double limInf, double limSup, unsigned int nrDiviziuni, double (*functie)(double));
double functie(double x);
double fX(double x);
double integralaSimpson(double limInf,double limSup,unsigned nrDiviziuni,double (*functie)(double));
double integralaDreptunghiuri(double limInf, double limSup, unsigned int nrDiviziuni, double (*functie)(double));
#endif
