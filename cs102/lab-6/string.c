#include <stdio.h>
void some_function( char* string );
int main( int argc, char** argv )
{
  char some_string[6] = "hello";
  some_function(some_string);
  some_function(argv[2]);
}
void some_function( char* string )
{
  fprintf( stdout, "string=%s\n", string );
}
