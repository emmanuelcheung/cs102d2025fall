#include <stdio.h>
#include "ipad.h"

int main( int argc, char** argv ) 
{
  int num;
  int price;
  char userinput[1024];
  clear_ipads();

  set_special_ipad(2);

  read_invoice( "ipad.invoice" );

  /* NEW: after reading one invoice, make a change and write a second one */
  set_ipad_price(8,1000);
  write_invoice( "ipad.invoice.2" );

  print_ipads();
  fprintf(stdout,"\n");
  fprintf(stdout,"exit and check out ipad.invoice.2 - it should be the same as ipad.invoice but with a price of 1000 for ipad 8\n");
  fprintf(stdout,"hit CTRL-D or CTRL-C to exit\n");
  fprintf(stdout,"\n");

  while( /* drink from stdin into userinput */ )
  {
    if( /*****************/ )
    {
      upshift_special();
    }
    else if( /*****************/ )
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
