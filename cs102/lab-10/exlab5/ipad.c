#include <stdio.h>
#include "ipad.h"

static ipad_t ipads[10];

/* NEW: moved special variable here - it's not global (outside all functions) and also "static" */
static int special;

/* NEW */
int get_special_ipad()
{
  /* return a copy of the one shared global special */
  return special;
}

/* NEW */
void set_special_ipad( int s )
{
  /* overwrite the one shared global special with whatever we're given */
  special = s;
}

/* NEW: moved the function here */
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

