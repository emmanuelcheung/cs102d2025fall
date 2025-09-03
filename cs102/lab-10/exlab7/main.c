#include <stdio.h>
#include "ipad.h"

int main( int argc, char** argv ) 
{
  char userinput[1024]; /* NEW: kinda like scratchpad */

  clear_ipads();
  set_special_ipad( 2 );
  set_ipad_price( 3, 1000 );

  print_ipads();
  fprintf(stdout,"\n");
  fprintf(stdout,"type either u or d and hit enter to upshift or downshift\n");
  fprintf(stdout,"hit CTRL-D or CTRL-C to exit\n");
  fprintf(stdout,"\n");

  /* remember reading from a straw from last week?
   * well this time you don't need to open a file...
   * just read from the straw:
   *   stdin
   * and put the results into:
   *   userinput
   */
  while( /* we can drink stuff from stdin and put it into userinput */ )
  {
    if( /* the first character of userinput is 'u' */ ) 
    {
      upshift_special();
    }
    else if( /* the first character of userinput is 'd' */ )
    {
      downshift_special();
    }

    print_ipads();
    fprintf(stdout,"\n");
  }

  return 0;
}
