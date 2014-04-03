#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( int argc, char** argv )
{
  double x = atof( argv[1] );
  double y = atof( argv[2] );

  double rho = sqrt( x * x + y * y );
  double theta = atan2( y, x );

  printf( "Բևեռային կոորդնատներն են․ ");
  printf( "ρ = %lf, θ = %lf\n", rho, theta );

  return 0;
}

