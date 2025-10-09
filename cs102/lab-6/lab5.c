#include <stdio.h>

int string_length ( char* stirng);
int main( int argc, char** argv )
{
	int i;
	int length;
	if (argc>1)
	{
	for( i=argc-1; i>0; i=i-1) 
		{
		length = string_length( argv[i] );
		fprintf( stdout, "%s %d\n", argv[i], length  );
		}
	}
else 
	{
	fprintf( stdout, "no arguments found!\n" );
	}
		return 0;
}

int string_length ( char * string )
{
int n;
while(string[n] != '\0' ){
n=n+1;
}
return n;
}
