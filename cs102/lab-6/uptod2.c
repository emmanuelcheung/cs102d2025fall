#include <stdio.h>
int main( int argc, char** argv )
{
  char string[10] = "ABCDEFGHI";
  int n = 0;
  while(n<10)
  {
    if(string[n] == 'D')
    {
      break;
    }
    fprintf(stdout, "%c", string[n]);
    n=n+1;
  }
  fprintf(stdout, "\n");
  return 0;
}
