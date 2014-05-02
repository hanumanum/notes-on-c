
#include <stdio.h>


int main( int argc, char** argv )
{
  for( int c = 1; c < argc; ++c )
    puts( argv[c] );

  return 0;
}

