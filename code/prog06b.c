/*
 * main.c
 *
 *  Created on: Apr 14, 2014
 *      Author: abadalya
 */

#include <stdlib.h>
#include <stdio.h>

/**/
struct node {
  double key;
  struct node* next;
};

/**/
struct node* create_node( double k )
{
  struct node* res = malloc(sizeof(struct node));
  res->key = k;
  res->next = NULL;
  return res;
}

/**/
void add_to_front( double k, struct node** list )
{
  struct node* no = create_node( k );
  no->next = *list;
  *list = no;
}

/**/
double remove_from_front( struct node** list )
{
  struct node* no = *list;
  *list = (*list)->next;
  double res = no->key;
  free( no );
  return res;
}

/**/
double remove_from_back( struct node** list )
{
  return 0.0;
}

/**/
void add_to_back( double k, struct node** list )
{
  if( NULL == *list )
    *list = create_node( k );
  else
    add_to_back( k, &((*list)->next) );
}

/**/
void print_list( struct node* list )
{
  if( list != NULL ) {
    printf( "%lf ", list->key );
    print_list( list->next );
  }
}

/**/
int main()
{
  struct node* e1 = NULL;
  add_to_front( 5.6, &e1 );
  add_to_front( 3.4, &e1 );
  add_to_front( 1.2, &e1 );
  print_list( e1 );

  struct node* e2 = NULL;
  add_to_back( 5.6, &e2 );
  add_to_back( 3.4, &e2 );
  add_to_back( 1.2, &e2 );
  print_list( e2 );

  return 0;
}

