
#include <stdlib.h>
#include <stdio.h>

/**/
int main()
{
  int size = 4; /* զանգվածի նախնական չափը */
  double* numbers = calloc(size, sizeof(double)); /* զբաղեցնել հիշողություն */
  if( numbers == NULL ) {
    puts( "Հնարավոր չէ հատկացնել պահանջվող հիշողությունը։" );
    exit(1);
  }
  
  /* թվերի ներմուծում */
  int count = 0; /* ներմուծված թվերի քանակը */
  while( 1 ) { /* անվերջ ցիկլ */
    int res = scanf( "%lf", &numbers[count] ); /* կարդալ մեկ թիվ */
    if( res == EOF ) break; /* ընդհատել ցիկլը, եթե EOF է */
    ++count; /* ավելացնել թվերի հաշվիչը */
    if( count == size ) { /* եթե հաշվիչի արժեքը հավասար է զանգվածի չափին */
      size *= 2; /* կրկնապատկել զանգվածի չափը */
      numbers = realloc( numbers, size * sizeof(double) ); /* ընդլայնել հիշողությունը  */
      if( numbers == NULL ) {
        puts( "Հնարավոր չէ հատկացնել պահանջվող հիշողությունը։" );
        exit(1);
      }
    }
  }

  /* թվերի արտածում հակառակ կարգով */
  while( --count >= 0 )
    printf( "%lf\n", numbers[count] );

  free( numbers ); /* ազատել զբաղեցրած հիշողությունը */

  return 0;
}


