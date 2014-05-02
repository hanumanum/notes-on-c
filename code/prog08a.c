
#include <stdio.h>
#include <string.h>

int strlen0( char* str )
{
  int count = 0; /* նիշերի քանակ */
  while( str[count] != '\0' ) /* քանի դեռ նիշը '\0' չէ */
    ++count; /* ավելացնել հաշվիչը */
  return count;
}

size_t strlen1( const char* s )
{
  const char* p = s;
  while( *++p );
  return p - s;
}

/**/
int main()
{
  char h0[] = { 'S', 't', 'r', 'i', 'n', 'g', '\0' };
  char h1[] = "String";
  char h2[7] = "String";
  char* h3 = "String";

  puts( h0 );
  puts( h1 );
  puts( h2 );
  puts( h3 );

  printf( " %s : %d\n", h0, strlen0(h0) );
  printf( " %s : %d\n", h0, strlen1(h0) );

  char* h4 = "One string";
  char h5[11] = { 0 };
  strcpy( h5, h4 );
  puts( h5 );

  char* h6 = "0123456789";
  char h7[11] = { 0 };
  strncpy( h7, h6, 5 );
  puts( h7 );

  return 0;
}



