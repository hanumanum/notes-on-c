
#include <stdio.h>
#include <math.h>

struct point {
  double x;
  double y;
};

double distance( struct point a, struct point b )
{
  double dx = a.x - b.x;
  double dy = a.y - b.y;
  return sqrt( dx * dx + dy * dy );
}

//double length( struct point[], int );

double length( struct point ps[], int nm )
{
  if( nm == 1 ) return 0L;
  return distance( ps[nm-1], ps[nm-2] ) + length( ps, nm-1 );
}

int main()
{
  struct point points[] = { {0,0}, {1,1}, {2,2} };
  double r = length( points, 3 );
  printf( ">> %lf\n", r );

  return 0;
}

