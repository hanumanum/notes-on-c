
#include <stdio.h>
#include <math.h>

/* դեկարտյան կետը */
struct cartesian_point {
  double x; // աբսցիս
  double y; // օրդինատ
};

/* բևեռային կետը */
struct polar_point {
  double rho; // շառավիղ
  double phi; // ազիմուտ
};

/* կետի դեկարտյան կոորդինատներից հաշվարկում է բևեռայինները */
struct polar_point to_polar( struct cartesian_point c )
{
  struct polar_point res;
  res.rho = sqrt( c.x * c.x + c.y * c.y );
  res.phi = atan2( c.y, c.x );
  return res;
}

/* կետի բևեռային կոորդինատներից հաշվարկում է դեկարտյանները */
struct cartesian_point to_cartesian( struct polar_point p )
{
  struct cartesian_point res;
  res.x = p.rho * cos( p.phi );
  res.y = p.rho * sin( p.phi );
  return res;
}


/**/
int main()
{
  struct cartesian_point c0;
  puts( "Ներածիր դեկարտյան կոորդինատները x,y․ " );
  scanf( "(%lf, %lf)", &c0.x, &c0.y );

  struct polar_point p0 = to_polar( c0 );
  puts( "Բևեռային կոորդնատներն են․ " );
  printf( "ρ = %lf, φ = %lf\n", p0.rho, p0.phi );

  struct cartesian_point c1 = to_cartesian( p0 );
  puts( "Դեկարտյան կոորդնատներն են․ " );
  printf( "x = %lf, y = %lf\n", c1.x, c1.y );

  return 0;
}

