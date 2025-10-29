#include <stdio.h>

int my_function(char*string) {
	fprintf(stdout, "my_function(%s)\n",string);
	return 0;
}

int main( int argc, char** argv) {
	int i;
	for (i=1; i < argc; i++) {
		my_function(argv[i]);
	}
	return 0;
}
