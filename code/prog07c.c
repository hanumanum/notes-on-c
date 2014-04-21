
#include <stdio.h>
#include <string.h>

int main()
{
  char h0[] = { 'H', 'e', 'l', 'l', 'o', '!', '\0' };
  char h1[] = "Hello!";
  char* h2 = "Hello!";

  puts( h0 );
  puts( h1 );
  printf( ">> %d\n", sizeof(h1) );
  puts( h2 );

  return 0;
}

