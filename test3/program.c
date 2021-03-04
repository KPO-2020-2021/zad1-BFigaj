/*Kompilacja gcc dziala a g++ nie dziala*/
#include <stdio.h>


extern const double PI;//w kompilacji g++ trzeba extern zmienic na static
extern const double E;//w kompilacji g++ trzeba extern zmienic na static


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
