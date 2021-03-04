/*g++ nie dziala poniewaz do funkcji dodaj
muszi byc podany typ przychodzacych zmiennych*/
#include <stdio.h>


double Dodaj(double,double);//W c++ powinno być double, double


int main( )
{
  double  Skl1 = 2.0,  Skl2 = 2.0;
  double  Wynik = Dodaj(Skl1,Skl2);

  printf("  Wynik dodawania:  %f + %f = %f\n",Skl1,Skl2,Wynik);

  return 0;
}
