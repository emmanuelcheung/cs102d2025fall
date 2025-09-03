#include <stdio.h>
#include "ipad.h"

int main( int argc, char** argv ) 
{
  int num;
  int price;
  char userinput[1024];
  clear_ipads();

  set_special_ipad(2);

  /* NEW: instead of specifically setting the prices, read them from the invoice file */
  read_invoice( "ipad.invoice" );

  print_ipads();
  fprintf(stdout,"\n");
  fprintf(stdout,"notice that the 8th and 10th ipad prices were read from the invoice\n");
  fprintf(stdout,"hit CTRL-D or CTRL-C to exit\n");
  fprintf(stdout,"\n");

  while( /* drink from stdin into userinput */ )
  {
    if( /*************/ 'u' )
    {
      upshift_special();
    }
    else if( /*************/ 'd' )
    {
      downshift_special();
    }
    else if( /***************************************************/ )
    {
      set_ipad_price( num, price );
    }

    print_ipads();
    fprintf(stdout,"\n");
  }

  return 0;
}
