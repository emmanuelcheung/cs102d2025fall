#include <stdio.h>
int main( int argc, char** argv )
{
  fprintf(stdout,"Content-type: text/html\n\n");
  fprintf(stdout,"<html>\n");
  fprintf(stdout,"<body>\n");
  fprintf(stdout,"  <h1>Hello, world!</h1>\n");
  fprintf(stdout,"</body>\n");
  fprintf(stdout,"</html>\n");
  return 0;
}
