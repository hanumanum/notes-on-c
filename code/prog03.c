
#include <stdio.h>
#include <math.h>

/**/
void polar( double x, double y, double* rho, double* phi )
{
  *rho = sqrt( x * x + y * y );
  *phi = atan2( y, x );
}

/**/
int main()
{
  double x = 0.0, y = 0.0;
  puts( "Ներածիր դեկարտյան կոորդինատները x,y․ " );
  scanf( "%lf,%lf", &x, &y );

  double rho = 0.0, phi = 0.0;
  polar( x, y, &rho, &phi );

  puts( "Բևեռային կոորդնատներն են․ ");
  printf( "ρ = %lf, φ = %lf\n", rho, phi );

  return 0;
}

