#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main( int argc, char **argv )
{
  int x = 0;
  srand48(getpid());
  x = mrand48();
  fprintf(stdout,"%d\n",x);
  return 0;
}
