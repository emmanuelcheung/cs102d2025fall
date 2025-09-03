#include <stdio.h>
int main( int argc, char **argv )
{
  char scratchpad[1024];
  fprintf( stdout, "this will read a line that you type, until you hit ENTER or CTRL-C or CTRL-C:\n" );
  if( fgets( scratchpad, 1024, stdin ) != NULL )
  {
    fprintf( stdout, "read line: %s", scratchpad );
  }
}
