
#include <stdio.h>

void f()
{
  FILE* out = fopen( "a0.txt", "w" );
  fputs( "Սա տեքստ է։", out );
  fclose( out );
}

void g()
{
  FILE* inp = fopen( "a0.txt", "r" );
  while( !feof( inp ) ) {
    char buffer[256] = { 0 };
    fgets( buffer, 255, inp );
    puts( buffer );
  }
  fclose( inp );
}

/**/
int main()
{
  f();
  g();

  return 0;
}

