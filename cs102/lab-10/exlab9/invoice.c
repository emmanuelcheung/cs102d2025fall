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
    }
    /* close the straw */
  }
}
