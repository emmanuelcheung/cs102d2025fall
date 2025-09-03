#include <stdio.h>
int main( int argc, char **argv )
{
  FILE* file;
  char scratch[1024];
  char filename[1024] = "file-u-want-2-read.txt";
  file = fopen( filename, "r" );
  if( file != NULL )
  {
    if( fgets( scratch, 1024, file ) != NULL )
    {
      fprintf( stdout, "read line: %s", scratch );
    }
    fclose( file );
  }
  else
  {
    fprintf( stdout, "Error! Cannot read %s!\n", filename );
  }
}
