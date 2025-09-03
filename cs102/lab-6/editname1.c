#include <stdio.h>
int main( int argc, char** argv )
{
  char name[5] = "Sean";
  name[0] = name[1];
  fprintf( stdout, "%s\n", name );
  return 0;
}
