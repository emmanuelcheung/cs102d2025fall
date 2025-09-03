#include <stdio.h>
typedef struct { int price; int size; } ipad_t;

/* NEW: because it's "outside any function", it's "global"
        and because it's "static", it's invisible outside this file */
static ipad_t ipads[10];

/* NEW: prototypes for all the new functions */
void clear_ipads();
int  get_ipad_price(int which);
void set_ipad_price(int which, int newprice);
int  get_ipad_size(int which);
void set_ipad_size(int which, int newsize);

int main( int argc, char** argv ) 
{
  /* make a bunch of ipads */
  int i;

  /* pick a number that's a special ipad */
  int special = 2;

  /* initialize all the ipads to a default price and size */
  /* NEW: use the function instead */
  clear_ipads();

  /* set one of them to a special price */
  /* NEW: use the function instead */
  set_ipad_price( 3, 1000 );

  /* print out all the ipads */
  for( i=0; i<10; i++ ) 
  {
    /* if it's special, say so! */
    if( i == special )
    {
      /* NEW: use the function(s) instead */
      fprintf( stdout, "SPECIAL ipad[%d] price=%d size=%d\n", 
        i, get_ipad_price(i), get_ipad_size(i) );
    }
    /* NEW: use the function instead */
    else if( get_ipad_price(i) == 1000 )
    {
      /* NEW: use the function(s) instead */
      fprintf( stdout, "expensive ipad[%d] price=%d size=%d\n", 
        i, get_ipad_price(i), get_ipad_size(i) );
    }
    else
    {
      /* NEW: use the function(s) instead */
      fprintf( stdout, "regular ipad[%d] price=%d size=%d\n", 
        i, get_ipad_price(i), get_ipad_size(i) );
    }
  }
  return 0;
}

/* NEW: all the new functions */
void clear_ipads()
{
  int i=0;
  for( i=0; i<10; i++ ) 
  {
    /* NOTE: we don't need to make a new ipads array because they all share the one "global" one */
    ipads[i].price=500;
    ipads[i].size=10;
  }
}

int  get_ipad_price(int which)
{
  /* NEW: return this ipad's price */
  return ipads[which].price;
  /* NOTE: we don't need to make a new ipads array because they all share the one "global" one */
}

void set_ipad_price(int which, int newprice)
{
  /* NEW: set this ipad's price to newprice */
  ipads[which].price = newprice;
  /* NOTE: we don't need to make a new ipads array because they all share the one "global" one */
}

int  get_ipad_size(int which)
{
  /* NEW: return this ipad's size */
  return ipads[which].size;
  /* NOTE: we don't need to make a new ipads array because they all share the one "global" one */
}

void set_ipad_size(int which, int newsize)
{
  /* NEW: set this ipad's size to newprice */
  ipads[which].size = newsize;
  /* NOTE: we don't need to make a new ipads array because they all share the one "global" one */
}

