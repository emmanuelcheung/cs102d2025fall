#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main (int argc, char **argv)
{
  int random;
  srand48(getpid());

  int array[10], i=1;
  for( i=0;i<10;i=i+1){
    array[i]=(mrand48()%101);
  }

  for (i=0;i<10; i=i+1)
  {
    fprintf(stdout, "%d\n", array[i] );
  }
}
