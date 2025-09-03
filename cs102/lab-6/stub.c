#include <stdio.h>
int my_function( int x );
int main( int argc, char **argv )
{
  int i;
  for( i=0; i<10; i++ )
  {
    my_function( i );
  }
  return 0;
}
int my_function( int x )
{
  fprintf( stdout, "my_function(%d)\n", x );
  return 0;
}
