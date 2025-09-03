#include <stdio.h>
int main( int argc, char** argv )
{
  char filename[10] = "foo";
  FILE* writeme = fopen( filename, "w" );
  if( writeme != NULL ) {
    fprintf( writeme, "hello!\n" );
    fclose( writeme );
  }
}
