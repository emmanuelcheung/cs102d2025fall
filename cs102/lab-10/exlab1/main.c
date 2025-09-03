#include <stdio.h>
typedef struct { int price; int size; } ipad_t;
int main( int argc, char** argv ) 
{
  /* make a bunch of ipads */
  ipad_t ipads[10];
  int i;

  /* initialize all the ipads to a default price and size */
  for( i=0; i<10; i++ ) 
  {
    ipads[i].price=500;
    ipads[i].size=10;
  }

  /* set one of them to a special price */
  ipads[3].price = 1000;

  /* print out all the ipads */
  for( i=0; i<10; i++ ) 
  {
    if( ipads[i].price == 1000 )
    {
      fprintf( stdout, "expensive ipad[%d] price=%d size=%d\n", 
        i, ipads[i].price, ipads[i].size );
    }
    else
    {
      fprintf( stdout, "regular ipad[%d] price=%d size=%d\n", 
        i, ipads[i].price, ipads[i].size );
    }
  }
  return 0;
}
