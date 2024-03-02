#include "../HEADERS//integrale.h"









double integralaTrapez(double limInf, double limSup, unsigned int nrDiviziuni, double (*functie)(double))
{
	double valoare;
	double x;
	double dx;

	dx=(limSup-limInf)/nrDiviziuni;
	
	valoare = ((*functie)(limInf)+(*functie)(limSup))/2;

	for(x=limInf+dx;x<limSup;x=x+dx)
	{
		valoare=valoare+((*functie)(x));
	}
	valoare=valoare*dx;
	

	return valoare;
}

double integralaSimpson(double limInf,double limSup,unsigned nrDiviziuni,double (*functie)(double))
{
	double valoare;
	double dx;
	double x;
	int doi=0;
	dx=(limSup-limInf)/(nrDiviziuni-1);
	
	valoare=functie(limInf)+functie(limSup);
	
	for(x=limInf+dx;x<limSup-dx;x=x+dx)
	{
		if(doi==1)
		{
			valoare=valoare+2*functie(x);		
			doi=0;
		}
		else if(doi==0)
		{
			valoare=valoare+4*functie(x);
			doi=1;
		}
	}
	valoare=valoare*dx/3;
	return valoare;
}

double integralaDreptunghiuri(double limInf, double limSup, unsigned int nrDiviziuni, double (*functie)(double))
{
    double dx;
    double valoareIntegrala=0;
    double x;
    dx = (limSup - limInf) / nrDiviziuni;

    for (x = limInf + dx / 2; x <= limSup - dx / 2; x = x + dx)
    {
        valoareIntegrala+=dx*functie(x);
    }

    return valoareIntegrala;
}