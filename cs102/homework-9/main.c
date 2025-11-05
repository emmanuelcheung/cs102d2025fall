#include <stdio.h>
#include "functions.h"

int main(int argc, char* argv[]) {
int i;
if (argc < 2) {
fprintf(stdout, "usage: %s <file> [<file2> ...]\n", argv[0]);
return 1;
}

for (i = 1; i< argc; i++) {
print_file(argv[i]);
}

return 0;
}

