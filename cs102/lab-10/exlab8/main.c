#include <stdio.h>
#include "ipad.h"

int main( int argc, char** argv ) 
{
  int num;   /*NEW*/
  int price; /*NEW*/

  char userinput[1024];

  clear_ipads();
  set_special_ipad( 2 );
  set_ipad_price( 3, 1000 );

  print_ipads();
  fprintf(stdout,"\n");
  fprintf(stdout,"set ipad 7 to price 1000\n");
  fprintf(stdout,"then set ipad 3 to price 500\n");
  fprintf(stdout,"then use 'u' and 'd' to move through those previously unavailable areas\n");
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
    /* NEW: look for "'price' and then 2 integers" 
     * HINT: look for the bookmarked slide in the lecture!
     */
    else if( /***************************************************/ )
    {
      /* and if you find it, set the price for ipad x to y */
      set_ipad_price( num, price );
    }

    print_ipads();
    fprintf(stdout,"\n");
  }

  return 0;
}
