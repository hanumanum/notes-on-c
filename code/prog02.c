#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  double x = 0.0, y = 0.0;
  printf( "Ներածիր դեկարտյան կոորդինատները x,y․ " );
  scanf( "%lf,%lf", &x, &y );

  double rho = sqrt( x * x + y * y );
  double theta = atan2( y, x );

  printf( "Բևեռային կոորդնատներն են․ ");
  printf( "ρ = %lf, θ = %lf\n", rho, theta );

  return 0;
}

