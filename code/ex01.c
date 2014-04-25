
#include <stdlib.h>

struct A {
  int v;
};

void f( struct A* p )
{}

void g( void* p )
{}

int main()
{
  struct A* a = NULL; /* ok */
  struct A* b = malloc(sizeof(struct A)); /* ok */
  struct A* c = (struct A*)malloc(sizeof(struct A)); /* ok */
  struct A* d = (void*)0; /* ok */
  struct A* e = (void*)1; /* ok */

  struct A* a1 = (int*)0; /* bad */

  f( b ); /* ok */
  f( NULL ); /* ok */
  g( c ); /* ok */

  return 0;
}



