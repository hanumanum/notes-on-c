
#include <stdio.h>
#include <stdlib.h>

#include "slist.h"


int main()
{
  struct slnode* l = NULL;
  l = cons( 1.2, l );
  l = cons( 2.3, l );
  l = cons( 3.4, l );
  print_list( l );
  destroy_node( l );

  return 0;
}

