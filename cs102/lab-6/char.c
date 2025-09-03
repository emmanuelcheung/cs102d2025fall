#include <stdio.h>
int main( int argc, char** argv )
{
  int i = 65;
  fprintf( stdout, "integer %d character %c\n", i, i );
  char c = 'A';
  fprintf( stdout, "integer %d character %c\n", c, c );
}
