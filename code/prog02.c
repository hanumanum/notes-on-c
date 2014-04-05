#include <stdio.h>
#include <math.h>

int main()
{
  double x = 0.0, y = 0.0;
  puts( "Ներածիր դեկարտյան կոորդինատները x,y․ " );
  scanf( "%lf,%lf", &x, &y );

  double rho = sqrt( x * x + y * y );
  double phi = atan2( y, x );

  puts( "Բևեռային կոորդնատներն են․ " );
  printf( "ρ = %lf, φ = %lf\n", rho, phi );

  return 0;
}

