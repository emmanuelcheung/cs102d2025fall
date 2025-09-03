#include <stdio.h>
void edit( char* string );
int main( int argc, char** argv )
{
  char name[5] = "Sean";
  edit(name);
  fprintf( stdout, "%s\n", name );
  return 0;
}
void edit( char* string )
{
  string[0] = string[1];
}
