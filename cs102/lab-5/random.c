#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main( int argc, char **argv )
{
  int random;
  srand48(getpid());  /* call this once only, in main */

  random = mrand48(); /* put in a variable first */
  fprintf( stdout, "random integer = %d\n", random );
  
  return 0;
}
