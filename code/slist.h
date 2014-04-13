
#ifndef SLIST_H
#define SLIST_H

struct slnode {
  double data;
  struct slnode* next;
};

extern struct slnode* create_node( double );
extern void destroy_node( struct slnode* );

extern struct slnode* cons( double, struct slnode* );
extern double head( const struct slnode* );
extern struct slnode* tail( const struct slnode* );
extern void print_list( const struct slnode* );

#endif

