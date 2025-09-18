#include <stdio.h>
int main( int argc, char **argv )
{
 int x = -100;
 int yprime = 0;
 int h = 3;
 int y = 0;
 int yint = 0;
 int sum = 0;
 fprintf( stdout, "x,y,yprime,yint,sum\n" );
 while( x <= 100 )
 {
 y = 8*x*x*x-6*x*x+6*x;
 yprime =   ((8*x*x*x)-(6*x*x)+(6*x)  -   8*(x-h)*(x-h)*(x-h) - 5*(x-h)*(x-h) + 6*(x-h))   /h;
 yint =     ( (8*x*x*x)-(6*x*x)+(6*x)  +   8*(x-h)*(x-h)*(x-h) - 5*(x-h)*(x-h) + 6*(x-h))    /2     *h;
 sum = sum + yint;
 fprintf( stdout, "%d,%d,%d,%d,%d\n", x, y,yprime,yint,sum );
 x = x + 3;
 }
 return 0;
}
