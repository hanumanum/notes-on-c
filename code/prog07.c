
#include <stdio.h>

void print_int_array( int a[], int n )
{
  if( n >= 0 ) {
    printf( "%d\n", a[n] );
    print_int_array( a, n - 1 );
  }
}

int main()
{
  unsigned int v0[10];
  int v1[5] = { 1, 2, 3, 4, 5 };
  long double v2[10] = { 1.2, 2.3 };
  double m0[2][3] = { {1.1, 1.2, 1.3}, {2.2, 2.3, 2.4} };

  printf( "%d\n", v1[2] );
  printf( "%d\n", *(v1 + 2) );

  printf( "%lf\n", v2[5] );

  print_int_array( v1, 4 );

  return 0;
}

