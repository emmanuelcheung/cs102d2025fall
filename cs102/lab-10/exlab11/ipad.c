#include <stdio.h>
#include "ipad.h"

static ipad_t ipads[10];
static int special;

/* "Upshifting the special" = make the next higher ipad the special ipad
   ...except expensive ipads aren't allowed to be special, so those aren't allowed. */

void upshift_special()
{
  /* if moving the special up one ipad isn't going to go off the edge of the ipads, then... */
  if( (special+1) < 10 )
  {
    /* if the price of the next ipad isn't expensive, then... */
    if( get_ipad_price( special+1 ) != 1000 )
    {
      /* then it's fine to move the special to the next one */
      special = special + 1;
    }
  }
}

/* NEW */
void downshift_special()
{
  /* if moving the special up one ipad isn't going to go off the edge of the ipads, then... */
  if( /**************/ )
  {
    /* if the price of the next ipad isn't expensive, then... */
    if( /*********************************/ )
    {
      /* then it's fine to move the special to the next one */
      /********************/
    }
  }
}

int get_special_ipad()
{
  return special;
}

void set_special_ipad( int s )
{
  special = s;
}

void print_ipads()
{
  int i=0;
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
}

void clear_ipads()
{
  int i=0;
  for( i=0; i<10; i++ ) 
  {
    ipads[i].price=500;
    ipads[i].size=10;
  }
}

int  get_ipad_price(int which)
{
  return ipads[which].price;
}

void set_ipad_price(int which, int newprice)
{
  ipads[which].price = newprice;
}

int  get_ipad_size(int which)
{
  return ipads[which].size;
}

void set_ipad_size(int which, int newsize)
{
  ipads[which].size = newsize;
}

