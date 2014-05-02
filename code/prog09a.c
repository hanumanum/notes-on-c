
#include <stdio.h>
#include <ctype.h>


/**/
int main( int argc, char** argv )
{
  // հաշվիչ
  int counts[26] = { 0 };

  // կարդալու ցիկլ
  FILE* inp = fopen( argv[1], "r" );
  while( !feof( inp ) ) {
    char ch = getc( inp );
    if( !isalpha( ch ) ) continue;
    ++counts[toupper(ch) - 'A'];
  }
  fclose( inp );

  // գրելու ցիկլ
  FILE* out = fopen( argv[2], "w" );
  for( int c = 0; c < 26; ++c )
    fprintf( out, "%c : %6d\n", (c + 'A'), counts[c] );
  fclose( out );

  return 0;
}

