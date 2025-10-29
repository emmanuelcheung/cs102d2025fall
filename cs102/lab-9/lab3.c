#include <stdio.h>

int print_file(char* filename) {
	FILE*file;	
	char scratch[1024];

fprintf(stdout, "print_file(%s)\n",filename);

file = fopen( filename, "r" );
if( file !=NULL )
{
while( fgets( scratch, 1024, file ) !=NULL )
{
fprintf( stdout, "read line: %s", scratch );
}
fclose( file );
}
else
{
fprintf(stdout, "could not open file: %s\n", filename);
}
	return 0;
}

int main( int argc, char** argv) {
	int i;
	for (i=1; i < argc; i++) {
		print_file(argv[i]);
	}
	return 0;
}
