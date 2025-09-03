#include <stdio.h>
int main( int argc, char** argv )
{
  fprintf( stdout, "%d\n", argc );
  fprintf( stdout, "%s\n", argv[3] );
  fprintf( stdout, "%s\n", argv[2] );
  fprintf( stdout, "%c\n", argv[1][0] );
  fprintf( stdout, "%c\n", argv[0][0] );
  return 0;
}
