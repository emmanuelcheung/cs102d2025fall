#include <stdio.h>
int main( int argc, char **argv )
{
  char scratchpad[1024];
  while( fgets( scratchpad, 1024, stdin ) != NULL )
  {
    fprintf( stdout, "I just got a line, and it's: %s", scratchpad );
  }
}
