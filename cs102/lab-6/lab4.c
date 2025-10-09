#include <stdio.h>

int main( int argc, char** argv )
{
int i;
if (argc>1){
for( i=argc-1; i>0; i=i-1) {
fprintf( stdout, "%s\n", argv[i] );
}
}
else {
fprintf( stdout, "no arguments found!\n" );
}
return 0;
}
