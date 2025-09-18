#include <stdio.h>
int main( int argc, char **argv )
{
 int x = 0;
 int y = 0;
 fprintf( stdout, "multiple,more\n" );
 while( x <= 200 )
 {
 y = 1+x*x
 fprintf( stdout, "%d,%d\n", x, y );
 x = x + 2;
 }
 return 0;
}
