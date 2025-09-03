#include <stdio.h>
int get_snacks(int* location);
int main( int argc, char** argv )
{
  int snacks = 10;
  int scoobys_mouth = 0;
  fprintf(stdout,"main's snacks=%d\n",snacks);
  fprintf(stdout,"scooby's mouth=%d\n",scoobys_mouth);
  scoobys_mouth = get_snacks(&snacks);
  fprintf(stdout,"main's snacks=%d\n",snacks);
  fprintf(stdout,"scooby's mouth=%d\n",scoobys_mouth);
}
int get_snacks(int* location)
{
  fprintf(stdout,"gremlin's location=%p\n",location);
  fprintf(stdout,"what's at location=%d\n",*location);
  return *location;
}
