#include <stdio.h>
#include "function.h"

int main ( int argc, char** argv)
{
 if (argc > 1)
{
int i;
for(i=1; i < argc; i = i + 1)
{
 reverse_string(argv[i]);
 fprintf(stdout, "%s", argv[i]);
}
fprintf(stdout, "\n");
}
else
{
fprintf(stdout, "no arguments given\n");
}
return 0;
}

