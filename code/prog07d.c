
#include <stdio.h>

void areverse( double arr[], int nm )
{
  for( int b = 0, e = nm - 1; b < e; ++b, --e ) {
    double temp = arr[b];
    arr[b] = arr[e];
    arr[e] = temp;
  }
}

void areversep( double* arr, int nm )
{
  for( double *p = arr, *q = arr + nm - 1; p < q; ++p, --q ) {
    double temp = *p;
    *p = *q;
    *q = temp;
  }
}

void aprint( double arr[], int nm )
{
  for( int j = 0; j < nm; ++j )
    printf( "%lf ", arr[j] );
  putchar( '\n' );
}

int main()
{
/*
  double d0[] = { 1.0 };
  aprint( d0, 1 );
  areverse( d0, 1 );
  aprint( d0, 1 );

  double d1[] = { 1.0, 2.0 };
  aprint( d1, 2 );
  areverse( d1, 2 );
  aprint( d1, 2 );
*/
  double d2[] = { 1.0, 2.0, 3.0 };
  aprint( d2, 3 );
  areverse( d2, 3 );
  aprint( d2, 3 );
  areversep( d2, 3 );
  aprint( d2, 3 );

  double d3[] = { 1.0, 2.0, 3.0, 4.0 };
  aprint( d3, 4 );
  areverse( d3, 4 );
  aprint( d3, 4 );
  areversep( d3, 4 );
  aprint( d3, 4 );

  return 0;
}



