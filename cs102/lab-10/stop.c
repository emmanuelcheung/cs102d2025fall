#include <stdio.h>
#include <stdlib.h> /* needed for using exit() */
int breakit(void);
int returnit(void);
int exitit(void);
int main( int argc, char** argv )
{
  fprintf(stdout,  "breakit returns %d\n", breakit() );
  fprintf(stdout, "returnit returns %d\n", returnit());
  fprintf(stdout,   "exitit returns %d\n", exitit()  );
}
int breakit(void)
{
  int i=0;
  for(i=0; i<10; i=i+1)
  {
    if(i>3)
      break;
    fprintf(stdout, "printing %d from breakit\n", i);
  }
  return 0;
}
int returnit(void)
{
  int i=0;
  for(i=0; i<10; i=i+1)
  {
    if(i>3)
      return 1;
    fprintf(stdout, "printing %d from returnit\n", i);
  }
  return 0;
}
int exitit(void)
{
  int i=0;
  for(i=0; i<10; i=i+1)
  {
    if(i>3)
      exit(0);
    fprintf(stdout, "printing %d from exitit\n", i);
  }
  return 0;
}
