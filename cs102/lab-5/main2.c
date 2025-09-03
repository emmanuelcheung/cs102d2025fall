#include <stdio.h>

#include "y.h"

int main( int argc, char** argv )
{
  int x = 5;
  fprintf( stdout, "%d\n", y(x) );
  fprintf( stdout, "%d\n", yprime(x) );
  return 0;
}

int y( int x )
{
  return x * x;
}

