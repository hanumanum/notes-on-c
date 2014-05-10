

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

static const char* ones[] = {
  "", "մեկ", "երկու", "երեք", "չորս", 
  "հինգ", "վեց", "յոթ", "ութ", "ինն" };

static const char* tens[] = {
  "", "տաս", "քսան", "երեսուն", "քառասուն", "հիսուն", 
  "վաթսուն", "յոթանասուն", "ութսուն", "ինսուն" };

#define ord(c) (c-'0')

void number_as_words( int num, char* wnum )
{
  char snum[7] = { 0 };
  sprintf( snum, "%6d", num );

  if( snum[0] != ' ' ) {
    strcpy( wnum, ones[ord(snum[0])] );
    strcat( wnum, " հարյուր " );
  }

  if( snum[1] != ' ' ) {
    strcat( wnum, tens[ord(snum[1])] );
	if( snum[1] == '1' && snum[2] != '0' )
		strcat( wnum, "ն" );
  }

  if( snum[2] != ' ' )
    strcat( wnum, ones[ord(snum[2])] );

  if( num >= 1000 )
    strcat( wnum, " հազար " );

  if( snum[3] != ' ' ) {
    strcat( wnum, ones[ord(snum[3])] );
    if( snum[3] != '0' || num < 1000 )
      strcat( wnum, " հարյուր " );
  }

  if( snum[4] != ' ' ) {
    strcat( wnum, tens[ord(snum[4])] );
  	if( snum[4] == '1' && snum[5] != '0' )
		strcat( wnum, "ն" );
  }

  if( snum[5] != ' ' )
    strcat( wnum, ones[ord(snum[5])] );
}

/**/
void test_number_as_words( int number, const char* expected )
{
  char result[128] = { 0 };
  number_as_words( number, result );
  if( 0 != strcmp( result, expected ) ) 
    printf( "ՍԽԱԼ։ %d թվի համար\n սպասվում է '%s'\n  ստացվել է '%s'\n", 
	    number, expected, result );
}


int main()
{
  test_number_as_words( 1, "մեկ" );
  test_number_as_words( 2, "երկու" );
  test_number_as_words( 3, "երեք" );
  test_number_as_words( 9, "ինն" );

  test_number_as_words( 11, "տասնմեկ" );
  test_number_as_words( 23, "քսաներեք" );
  test_number_as_words( 96, "ինսունվեց" );

//  test_number_as_words( 121, "մեկ հարյուր քսանմեկ" );
//  test_number_as_words( 237, "երկու հարյուր երեսունյոթ" );
  test_number_as_words( 964, "ինն հարյուր վաթսունչորս" );

//  number_as_words( 1103 );
//  number_as_words( 2453 );
  test_number_as_words( 9610, "ինն հազար վեց հարյուր տաս" );

//  number_as_words( 11030 );
  test_number_as_words( 24531, "քսանչորս հազար հինգ հարյուր երեսունմեկ" );
//  number_as_words( 96102 );

  test_number_as_words( 110310, "մեկ հարյուր տաս հազար երեք հարյուր տաս" );
//  number_as_words( 245332 );
//  number_as_words( 961078 );


  /*
  int num = 0;
  char words[128] = { 0 };
  while( true ) {
    printf( "> " );
    if( -1 == scanf( "%d", &num ) ) break;
    number_as_words( num, words );
    puts( words );
    words[0] = 0;
  }
  */

  return 0;
}



