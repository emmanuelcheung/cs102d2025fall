#include <stdio.h>
#include "ipad.h"
#include "invoice.h"

void read_invoice( char* filename )
{
  FILE* f;
  char scratchpad[1024];
  int num, price;
  f = /* open filename for reading */
  if( /* the straw f is fine to drink through */ )
  {
    while( /* drink one line and put it into scratchpad */ )
    {
      if( /* we can read "PRICE and 2 integers" from scratchpad */ )
      {
        set_ipad_price( num, price );
      }
      /* NEW: if we find a special line, set special to that */
      else if( sscanf( scratchpad, "SPECIAL %d", &num ) == 1 )
      {
        set_special_ipad( num );
      }
    }
    /* close straw */
  }
}

void write_invoice( char* filename )
{
  FILE* f;
  int i;
  f = /* open filename for WRITING (see lecture) */
  if( /* straw is okay */ )
  {
    for( /* as many ipads as we have */ )
    {
      fprintf( f, /* "PRICE # #" where # and # are the # of the ipad and the price of that ipad */ );
    }

    /* NEW: always print your special ipad, once, now that you're done pringing all the prices */
    fprintf( f, "SPECIAL %d\n", get_special_ipad() );

    /* close straw */
  }
}
