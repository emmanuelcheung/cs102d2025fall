#include <stdio.h>
#include "ipad.h"

static ipad_t ipads[10];

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

