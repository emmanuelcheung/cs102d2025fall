#include <stdio.h>
#include "ipad.h"

int main( int argc, char** argv ) 
{
  int num;
  int price;
  char userinput[1024];
  char invoice[1024]; /*NEW*/
  clear_ipads();

  /* NEW: don't set special any more */

  /* NEW: don't read or write any invoices */

  print_ipads();
  fprintf(stdout,"\n");
  fprintf(stdout,"read ipad.invoice\n");
  fprintf(stdout,"set special to any number to move instantly\n");
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
    else if( /* if we can sscanf userinput for "read" and a string */ )
    {
      /* then treat that string as a filename,
       * clear the ipads,
       * and read the invoice from that filename
       */
      clear_ipads();
      read_invoice( invoice );
    }
    else if( /* if we can sscanf userinput for "write" and a string */ )
    {
      /* then treat that string as a filename,
       * and write the invoice to that filename
       */
      write_invoice( invoice );
    }
    /* NEW: set special anywhere */
    else if( /* if we can sscanf userinput for "special" and a number */ )
    {
      set_special_ipad( num );
    }

    print_ipads();
    fprintf(stdout,"\n");
  }

  return 0;
}
