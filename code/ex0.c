
#include <stdio.h>
#include "ni.c"

/**/
double sqr(double x) { return x * x; }
double cub(double x) { return x * x * x; }

/**/
int main()
{
  double r0 = integral( &sqr, -1, 1 );
  printf( "> %lf\n", r0 );
  double r1 = integral( &cub, -1, 2 );
  printf( "> %lf\n", r1 );

  return 0;
}

