
#include <stdlib.h>
#include <stdio.h>

struct node {
  double key;
  struct node* next;
};

struct node* create_node( double k )
{
  struct node* res = malloc(sizeof(struct node));
  res->key = k;
  res->next = NULL;
  return res;
}

void destroy_node( struct node* n )
{
  free( n );
}

struct node* add_front( double k, struct node* list )
{
  struct node* no = create_node( k );
  no->next = list;
  return no;
}

struct node* add_back( double k, struct node* list )
{
  if( list == NULL )
    return create_node( k );

  if( list->next == NULL )
    list->next = create_node( k );
  else
    add_back( k, list->next );

  return list;
}

/* ?? */
void add_back_2( double k, struct node* list )
{
  struct node* p = list;
  while( p->next != NULL ) {
    p = p->next;
  }
  // TODO
}

void print_list_rec( struct node* list )
{
  if( list != NULL ) {
    printf( "%lf ", list->key ); /* արտածել գլխի բանալին */
    print_list_rec( list->next ); /* արտածել պոչը */
  }
}

void print_list_iter( struct node* list )
{
  while( list != NULL ) {
    printf( "%lf ", list->key ); /* արտածել բանալին */
	list = list->next; /* անցնել հաջորդ հանգույցին */
  }
}


int main()
{
  struct node* e0 = NULL;
  e0 = add_front( 5.6, e0 );
  e0 = add_front( 3.4, e0 );
  e0 = add_front( 1.2, e0 );

  print_list_rec( e0 );
  putchar( '\n' );
  print_list_iter( e0 );
  putchar( '\n' );

  e0 = add_back( 7.8, e0 );
  print_list_iter( e0 );
  putchar( '\n' );
  

  return 0;
}

