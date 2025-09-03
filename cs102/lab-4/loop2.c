#include <stdio.h>
int main( int argc, char** argv )
{
  int i = 0;
  for( i = 0; i < 10; i = i + 1 )
  {
    fprintf( stdout, "%d\n", i );
  }
}
