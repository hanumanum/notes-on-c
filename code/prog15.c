
#include <stdio.h>

int read_int()
{
  int res = 0;
  scanf( "%d", &res );
  return res;
}

int max_2_int( int a, int b )
{
  if( a > b ) return a;
  return b;
}

int max_3_int( int a, int b, int c )
{
  return max_2_int( max_2_int( a, b ), c );
}

int main()
{
  return 0;
}

