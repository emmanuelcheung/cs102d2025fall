#include <stdio.h>
void put_snacks(int* location);
int main( int argc, char** argv )
{
  int snacks = 0;
  int* secret_stash;
  fprintf(stdout,"main's snacks=%d\n",snacks);
  fprintf(stdout,"main's &snacks=%p\n",&snacks);
  secret_stash = &snacks;
  put_snacks(secret_stash);
  fprintf(stdout,"main's snacks=%d\n",snacks);
  fprintf(stdout,"main's &snacks=%p\n",&snacks);
}
void put_snacks(int* location)
{
  fprintf(stdout,"gremlin's location=%p\n",location);
  fprintf(stdout,"what's at location=%d\n",*location);
  *location = 10;
  fprintf(stdout,"gremlin's location=%p\n",location);
  fprintf(stdout,"what's at location=%d\n",*location);
}
