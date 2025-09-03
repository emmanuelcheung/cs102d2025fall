#include <stdio.h>
int main( int argc, char** argv )
{
  char name[ 3] = {'B', 'o', 'b'};
  char more[10] = { 'm', 'o', 'r', 'e', 's', 't', 'u', 'f', 'f', '\0' };
  fprintf( stdout, "%s\n", name );
  return 0;
}
