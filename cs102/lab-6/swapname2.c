#include <stdio.h>
int main( int argc, char** argv )
{
  char name[5] = "Sean";
  char extra;
  extra = name[0];
  name[0] = name[3];
  name[3] = extra;
  fprintf( stdout, "%s\n", name );
  return 0;
}
