#include <stdio.h>

/* NEW: include the typedefs and prototypes instead */
#include "ipad.h"

int main( int argc, char** argv ) 
{
  int i;
  int special = 2;
  clear_ipads();
  set_ipad_price( 3, 1000 );
  for( i=0; i<10; i++ ) 
  {
    if( i == special )
    {
      fprintf( stdout, "SPECIAL ipad[%d] price=%d size=%d\n", 
        i, get_ipad_price(i), get_ipad_size(i) );
    }
    else if( get_ipad_price(i) == 1000 )
    {
      fprintf( stdout, "expensive ipad[%d] price=%d size=%d\n", 
        i, get_ipad_price(i), get_ipad_size(i) );
    }
    else
    {
      fprintf( stdout, "regular ipad[%d] price=%d size=%d\n", 
        i, get_ipad_price(i), get_ipad_size(i) );
    }
  }
  return 0;
}
