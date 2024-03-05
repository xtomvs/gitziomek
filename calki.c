#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define lp 1000

double c_od,c_do;

double f3(double x)
{
 return -1;      
}      
double f4(double x) {

 return 1;
}


double prostokaty(double( *f)(double))
{
       double krok, p, suma=0;
       krok=(c_do-c_od)/lp;
       for(p=c_od; p<c_do; p+=krok)
               suma+=(*f)(p)*krok;
       return suma;      
}

double trapezy(double (*f)(double))
{
return 1;
}
       
double mc(double(*f)(double))
{
 return 1;
}

