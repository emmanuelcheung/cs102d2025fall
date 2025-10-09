#include <stdio.h>

int main( int argc, char** argv )
{
int i;
if (argc>1){
for( i=1; i<argc; i=i+1) {
fprintf( stdout, "%s\n", argv[i] );
}
}
else {
fprintf( stdout, "no arguments found!\n" );
}
return 0;
}
