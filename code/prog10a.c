
#include <stdio.h>
#include "numint.h"

double sqr( double x ) { return x * x; }

int main()
{
  double k = integral( &sqr, -1, 1 );
  printf( "> %lf\n", k );
  return 0;
}

