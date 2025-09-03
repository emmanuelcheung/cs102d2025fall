#include <stdio.h>
#include "ipad.h"

int main( int argc, char** argv ) 
{
  clear_ipads();
  set_special_ipad( 2 );
  set_ipad_price( 3, 1000 );

  fprintf(stdout,"initial ipads\n");
  print_ipads();
  fprintf(stdout,"\n");

  /* NEW: print it once, then try upshifting and downshifting the special, printing after each one
   * the idea is that you should see the special move around but not where it's not allowed */
  fprintf(stdout,"after trying to move to the special to the next ipad (which should fail because the next one in line is expensive)\n");
  upshift_special();
  print_ipads();
  fprintf(stdout,"\n"); /* just to separate them */

  fprintf(stdout,"after trying to move the special to the previous ipad\n");
  downshift_special();
  print_ipads();
  fprintf(stdout,"\n");

  fprintf(stdout,"after trying to move the special to the previous ipad\n");
  downshift_special();
  print_ipads();
  fprintf(stdout,"\n");

  fprintf(stdout,"after trying to move the special to the previous ipad (which should fail because we were already at the first ipad)\n");
  downshift_special();
  print_ipads();
  fprintf(stdout,"\n");

  return 0;
}
