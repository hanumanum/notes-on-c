
#include <stdio.h>
#include <stdlib.h>

#include "slist.h"

/**/
struct slnode* create_node( double vl )
{
  struct slnode* res = (struct slnode*)malloc(sizeof(struct slnode));
  res->data = vl;
  res->next = NULL;
  return res;
}

/**/
void destroy_node( struct slnode* sl )
{
  if( sl != NULL ) {
    destroy_node( sl->next );
	free( sl );
  }
}

/**/
struct slnode* cons( double vl, struct slnode* sl )
{
  struct slnode* res = create_node( vl );
  res->next = sl;
  return res;
}

/**/
double head( const struct slnode* sl )
{
  if( sl != NULL )
    return sl->data;
  return 0.0; // ?
}

/**/
struct slnode* tail( const struct slnode* sl )
{
  if( sl == NULL )
    return NULL;
  return sl->next;
}

/**/
void print_list( const struct slnode* sl )
{
  if( sl != NULL ) {
    printf( "%lf ", sl->data );
    print_list( sl->next );
  }
  else
    putchar( '\n' );
}

