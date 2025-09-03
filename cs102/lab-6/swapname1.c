#include <stdio.h>
int main( int argc, char** argv )
{
  char name[5] = "Sean";
  name[0] = name[3];
  name[3] = name[0];
  fprintf( stdout, "%s\n", name );
  return 0;
}
