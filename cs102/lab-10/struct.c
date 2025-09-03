#include <stdio.h>

typedef struct { int gb; int price; } ipad_t;

int main( int argc, char **argv ) 
{
  ipad_t my_ipad;
  my_ipad.gb = 10;
  my_ipad.price = 500;
  fprintf(stdout, "my ipad's size is %d GB and price is $%d\n",
    my_ipad.gb, my_ipad.price);

  ipad_t assembly_line_of_ipads[100];
  int i=0;
  for(i=0; i<100; i=i+1)
  {
    assembly_line_of_ipads[i].gb    = 20;
    assembly_line_of_ipads[i].price = 700;
  }
  fprintf(stdout, "the 99th ipad's size is %d GB and price is $%d\n",
    assembly_line_of_ipads[98].gb, assembly_line_of_ipads[98].price);
}
