#include <stdio.h>
typedef struct { int price; int size; } ipad_t;
int main( int argc, char** argv ) {
  ipad_t ipads[10];
  int i;
  for( i=0; i<10; i++ ) {
    ipads[i].price=500;
    ipads[i].size=10;
  }
  for( i=0; i<10; i++ ) {
    fprintf( stdout, "ipad[%d] price=%d size=%d\n", 
      i, ipads[i].price, ipads[i].size );
  }
  return 0;
}
