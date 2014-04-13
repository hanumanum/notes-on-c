
#include <stdio.h>
#include <math.h>

/* cartesian և polar տպերի հայտարարությունը */
typedef struct {
  double first;  // առաջին
  double second; // երկրորդ
} cartesian, polar;

#define X(p) p.first
#define Y(p) p.second
#define RHO(p) p.first
#define PHI(p) p.second

/* դեկարտյանից բևեռային կոորդինատների հաշվարկումը */
polar to_polar( cartesian c )
{
  polar res;
  res.first = sqrt( c.first * c.first + c.second * c.second );
  res.second = atan2( c.second, c.first );
  return res;
}

/* բևեռայինից դեկարտյան կոորդինատների հաշվարկը */
cartesian to_cartesian( polar p )
{
  cartesian res;
  X(res) = RHO(p) * cos( PHI(p) );
  Y(res) = RHO(p) * sin( PHI(p) );
  return res;
}

/**/
int main()
{

  cartesian c0;
  puts( "Ներածիր դեկարտյան կոորդինատները x,y․ " );
  scanf( "(%lf, %lf)", &X(c0), &Y(c0) );

  polar p0 = to_polar( c0 );
  puts( "Բևեռային կոորդնատներն են․ " );
  printf( "ρ = %lf, φ = %lf\n", RHO(p0), PHI(p0) );

  cartesian c1 = to_cartesian( p0 );
  puts( "Դեկարտյան կոորդնատներն են․ " );
  printf( "x = %lf, y = %lf\n", X(c1), Y(c1) );

  return 0;
}


