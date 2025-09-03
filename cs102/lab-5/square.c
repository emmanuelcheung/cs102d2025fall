#include <stdio.h>
int main( int argc, char**argv )
{
  int i, j;
  for( i=0; i<5; i=i+1 )
  {
    for( j=0; j<5; j=j+1 )
    {
      fprintf( stdout, "x " );
    }
    /* if we put it here, it happens 5 times */
    /* but AFTER each set of 5, not before */ 
    fprintf( stdout, "\n" );
  }
  return 0;
}
