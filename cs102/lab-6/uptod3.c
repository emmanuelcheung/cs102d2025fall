#include <stdio.h>
int main( int argc, char** argv )
{
  char string[10] = "ABCDEFGHI";
  int n = 0;
  while(string[n] != 'D')
  {
    fprintf(stdout, "%c", string[n]);
    n=n+1;
  }
  fprintf(stdout, "\n");
  return 0;
}
