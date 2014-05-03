
#include <string.h>
#include <stdio.h>


int main()
{
  char* s0 = "One String";
  char* s1 = strchr( s0, 'S' );
  puts( s1 );

  char* s2 = "One long string";
  char* s3 = strstr( s2, "long" );
  puts( s3 );
//  char* s4 = strstr( s2, "two" );
//  puts( s4 );

  char s4[64] = { 0 };
  strcpy( s4, "One" );
  puts( s4 ); // One
  strcat( s4, ", Two" );
  puts( s4 ); // One, Two
  strncat( s4, ", Three, Four", 7 );
  puts( s4 ); // One, Two, Three

  return 0;
}


