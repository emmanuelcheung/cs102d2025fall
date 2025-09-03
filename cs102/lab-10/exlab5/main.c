#include <stdio.h>
#include "ipad.h"

int main( int argc, char** argv ) 
{
  /* NEW: use the set special function instead */
  set_special_ipad( 2 );

  clear_ipads();
  set_ipad_price( 3, 1000 );

  /* NEW: use the print function instead */
  print_ipads();

  return 0;
}
