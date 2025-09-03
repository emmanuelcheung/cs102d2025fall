#include <stdio.h>
void put_snacks(int snacks);
int main( int argc, char** argv )
{
  int snacks = 0;
  fprintf(stdout,"main's snacks=%d\n",snacks);
  put_snacks(snacks);
  fprintf(stdout,"main's snacks=%d\n",snacks);
}
void put_snacks(int snacks)
{
  fprintf(stdout,"gremlin's snacks=%d\n",snacks);
  snacks = 10;
  fprintf(stdout,"gremlin's snacks=%d\n",snacks);
}
